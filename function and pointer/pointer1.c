#include<stdio.h>
int main(){
//%p is use to print the address or hexadecimal value.
    int x=25;
    int *a=&x;
    *a=7;//so the value changes to 25-->7
    printf("%d\n",*a);
    printf("%p",a);
    return 0;
}