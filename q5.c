#include<stdio.h>
int main() {

          int rows;
          char symbol;
          
          printf("Enter the number of rows: ");
          scanf("%d", &rows);
          printf("\n");
         
          printf("Enter a symbol(*, ^, @ or -) : ");
          scanf(" %c",&symbol);
          

          for (int i = 1; i <= rows; i++)
           {
             for (int space = 1; space <= rows - i; space++)
              {
                printf(" ");
              }

             for (int sym = 1; sym <= (2 * i -1); sym++)
              {
                printf("%c",symbol);
              }
             printf("\n");
           }
       return 0;
   }
          
