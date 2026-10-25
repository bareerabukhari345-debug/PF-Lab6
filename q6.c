#include<stdio.h>
int main() {
        
         int rows;
      
         printf("Enter the number of rows: ");
         scanf("%d", &rows);
         printf("\n");

         for( int i = 0 ; i <= rows; i++)
          {
            for(int space = 0; space < (rows - i); space++)
             {
               printf(" ");
             }
            for(int j = 0; j <= i; j++)
             {
               printf("%d",  i);
             }
            printf("\n");
         }
         for (int i = rows - 1; i >= 0; i--)
          {
            for( int space = 0; space < (rows - i); space++)
             {
               printf(" ");
             }
            for(int j = 0; j <= i; j++)
             {
               printf("%d",  i);
             }
            printf("\n");
          }
     return 0;
 }