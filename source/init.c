#include<stdio.h>

#include"init_module.h"


int main(){

   int run=1,event;
   printf("Enter number of events\n");
   scanf("%d",&no_of_events);

   module_event();
   printf("Enter the event to be executed\n to terminate the process enter -1\n");
   
   while (run)
       {
         scanf("%d",&event);
         if (event!=-1)
         {
              if ((event>0)&&(event<=no_of_events))
                   {
                     event_execute(event);
                    }
              else{
                    printf("No such event");
                    }
          }
         else
         {
             freeup();
             run=0;
          }
        }
           

return 0;


}
