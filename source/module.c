#include<stdio.h>

#include"init_module.h"



void module1(int event){
   printf(" event %d is interested in module 1\n",event);
}
void module2(int event){
   printf(" event %d is interested in module 2\n",event);
}
void module3(int event){
   printf(" event %d is interested in module 3\n",event);
}
void module4(int event){
   printf(" event %d is interested in module 4\n",event);
}
void module5(int event){
   printf(" event %d is interested in module 5\n",event);
}



void module_event(){
    int bitmap=0,evt=0,id;
    fptr fp;
    for(id=1;id<=5;id++){
        printf("Enter the events in which  module %d is interested in \n enter 0 when done\n",id);
        scanf("%d",&evt);
        while(evt>0 && evt<=no_of_events){ 
             bitmap|=1<<(evt-1);  
             scanf("%d",&evt);
             }

       if (id==1) fp=module1;
       else if (id==2) fp=module2;
       else if (id==3) fp=module3;
       else if (id==4) fp=module4;
       else if (id==5) fp=module5;
       
       register_event(id,bitmap,fp);
       bitmap=0;

    }

}


