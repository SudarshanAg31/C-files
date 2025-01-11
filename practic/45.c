#include<string.h>
#include<stdio.h>
int main(){
    char a[100];
    char b[100];
    gets(a);
    gets(b);
    if(strstr(a,b))
    printf("1");
    else
    printf("0");
    return 0;
}