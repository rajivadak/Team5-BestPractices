
#include "header.h"

int sum(int s , int arr[])
{
  int sum;
   sum = 0;
   
   for(int i = 0; i < s; i++) {
      sum = sum + arr[i];      
   }

   printf("Sum of the numbers is %d.", sum);   

   return 0;
}
