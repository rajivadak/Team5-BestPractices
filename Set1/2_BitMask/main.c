#include<stdio.h>
#include "mask.h"
int main(){
    int ch, n, pos, result;
    int (*fptr[4])(int, int);
    fptr[0]=set;
    fptr[1]=reset;
    fptr[2]=flip;
    fptr[3]=query;
    printf("Enter the number:");
    scanf("%d", &n);
    printf("1.Set bit \n2.Reset bit \n3.Flip bit \n4.Query bit \n Enter your choice:");
    scanf("%d", &ch);
    printf("Enter position of bit:");
    scanf("%d", &pos);
    result=fptr[ch-1](n,pos);
    
}