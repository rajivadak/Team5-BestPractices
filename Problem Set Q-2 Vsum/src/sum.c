
#include "header.h"

int sum(int s , int arr[])
{
  int sum;
   sum = 0;
   
   for(int i = 0; i < s; i++) {
      sum = sum + arr[i];      
   }

   return sum;
}
