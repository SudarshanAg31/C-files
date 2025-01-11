#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    gets(a);
    char b[100];
    gets(b);
    if(strstr(a,b)){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}