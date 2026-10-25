#include<stdio.h>
int main() {

           int n, x ;
           float s= 0.0;
        
           printf("Enter the value for n: ");
           scanf("%d",&n);
           printf("\nEnter the value for x: ");
           scanf("%d",&x);
        
           for (int k = 0; k <= n; k++)
            {
              float power=1.0;
              for (int i = 1 ; i <= k ; i++)
               {
                 power= power * x;
               }
               
               float factorial = 1.0;
               for (int i = 1; i <= k; i++)
                {
                  factorial = factorial * i;
                }
          
              s = s + (power / factorial);
           }
              
           printf("s = %.1f\n", s);
          
           return 0;
 }
          