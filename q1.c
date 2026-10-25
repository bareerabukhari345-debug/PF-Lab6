#include<stdio.h>
int main() {
            
          int max_rows = 5;
         
          for (int row = 1; row <= max_rows; row++)
           {
             for(int s = 1 ; s <= row -1; s++)
               {
                 printf(" ");
               }
             for( int st = 1; st <= (max_rows - row + 1); st++)
               {
                 printf("*");
               }
               printf("\n");
           }
          
          printf("\n");

          for ( int row = 1; row <= max_rows; row++)
            {
              for(int s = 1; s <= (max_rows - row); s++)
               {
                 printf(" ");
               }
              for(int st = 1; st <= row; st++)
              {
                printf("*");
               }
              printf("\n");
          }
        
   return 0;
}