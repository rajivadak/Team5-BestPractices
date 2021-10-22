#include<stdio.h>
#include "arith.h"
int main(){
    int a, b, result, ch;
    int (*fptr[4])(int, int);
    fptr[0]=add;
    fptr[1]=sub;
    fptr[2]=mul;
    fptr[3]=div;
    printf("1.Add\n2.Subtract\n3.Multiply\n4.Divide\nEnter your Choice:");
    scanf("%d", &ch);
    printf("\nyour choice is %d", ch);
    printf("Enter 2 numbers:");
    scanf("%d%d", &a, &b);
    result=fptr[ch-1](a, b);
    printf("Result is : %d", result);
    return 0;
}