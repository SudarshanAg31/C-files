#include<stdio.h>
int main(){
//%p is use to print the address or hexadecimal value.
    int x=25;//original address.
    int *a=&x;//address of x is saved in pointer a.
    printf("%d\n",*a);//it return value store in the address of pointer a. 
    printf("%p",a);//it return the address store in the a.
    return 0;
}