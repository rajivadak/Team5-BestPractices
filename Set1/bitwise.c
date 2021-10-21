#include<stdio.h>
int bitwise(char * input){
    int result=0;
    unsigned char bytes[4]={0};
    sscanf(input, "%hhd.%hhd.%hhd.%hhd", &bytes[3], &bytes[2], &bytes[1], &bytes[0]);
    result= bytes[0] | bytes[1] << 8 | bytes[2] << 16 | bytes[3] << 24;
    return result;
}
int main(){
    char input[16];
    int output=0;
    printf("Enter IP Address:");
    scanf("%s", input);
    output=bitwise(input);
    printf("The integer equivalent is : %d", output);
    return 0;
}