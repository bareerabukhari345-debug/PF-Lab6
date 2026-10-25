#include<stdio.h>
int main() {

       char choice;
       int o;
       int i;

       printf("Enter symbol:*, ^ , @ or -\n");
       scanf("%c",&choice);
       printf("\n");
       
       for (o = 1 ; o <= 5 ; o++)
          {
            for( i = 1 ; i <= o ; i++)
             {
               printf("%c", choice);
             }
              printf("\n");
           }
      
      for( o = 4 ; o >= 1 ; o--)
       {
         for( i = 1; i <= o ; i++)
          {
            printf("%c", choice);
          }
           printf("\n");
       }

  return 0 ;
}
           



















