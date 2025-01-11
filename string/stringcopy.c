#include<stdio.h>
#include<string.h>
int main(){
    char a[40];
    char b[40];
    gets(a);
    gets(b);
    int k=0;
    int x=0;
    while(a[k]!=0||a[x]!=0){
        a[k]=b[x];
        k++;
        x++;
    }
    printf("%s",a);
    return 0;
}