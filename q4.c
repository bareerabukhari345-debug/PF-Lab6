#include<stdio.h>
int main() {
        
          int found_count = 0;
          int num = 1;
     
          while( found_count < 4)
           {
             int sum = 0;
            
             for ( int i = 1; i <= num / 2; i++)
              {
                if(num % i == 0)
                 {
                   sum += i;
                 }
              }
        
             if (sum == num && num > 0) 
              {
                found_count++;
            
                printf("%d is a perfect number\n", num);
                
                int first=1;
                for (int i = 1; i <= num/2; i++)
                 {
                   if(num % i == 0)
                     {
                       if (!first)
                         {
                           printf("+");
                         }
                         printf("%d", i);
                         first = 0;
                      }
                   }
                   printf("=%d\n",num);
               }
               num++;
           }
        return 0;
}
 
