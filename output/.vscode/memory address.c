#include<stdio.h>
int main(){
    char b='B';
    char a[10];
    double z='z';
    printf("byte:%d\n",sizeof(a));
    printf("byte:%d\n",sizeof(b));
    printf("byte:%d\n",sizeof(z));
    printf("address:%p\n",&a);
    printf("address:%p\n",&b);
    printf("address:%p\n",&z);
    return 0;
}