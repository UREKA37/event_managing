#include<stdio.h>
#include<stdlib.h>

#include"init_module.h"

struct module
{
    int id;
    int bitmap;
    fptr fp;
    struct module *next;
   
} *head = NULL;



void event_execute(int event)
{
  struct module *temp=head;
  while(temp!=NULL){
     if ((temp->bitmap>>(event-1))&1){
        temp->fp(event);
       } 
      temp=temp->next; 
    }
  }



void register_event(int id, int bitmap,fptr fp){
   struct module *new =(struct module*)malloc(sizeof(struct module));
   struct module *temp=head;
   if(temp==NULL){
    new->id=id;
    new->bitmap=bitmap;
    new->fp=fp;
    new->next=NULL;
    head=new;
    }
   else{
    while(temp->next!=NULL){
        temp=temp->next;
        }
      new->id=id;
      new->bitmap=bitmap;
      new->fp=fp;
      new->next=NULL;
      temp->next=new;
    }
    return;
}


void freeup(){
 struct module *temp=head;
 while(temp!=NULL){
    head=temp->next;
    free(temp);  
    temp=head;
   }
   

}

