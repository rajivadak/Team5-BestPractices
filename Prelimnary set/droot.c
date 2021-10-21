#include<stdio.h>
int droot(int n){
    int res=n;
    while(res>=10){
        res=0;
    while(n!=0){
        res=res+(n%10);
        n=n/10;
    }
    n=res;
    //printf("\n n=%d", res);
    }
    return res;

}
int main(){
    int num;
    printf("Enter Number to find droot:");
    scanf("%d", &num);
    printf("Digital root is : %d", droot(num));
    return 0;
}