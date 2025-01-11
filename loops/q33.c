#include<stdio.h>
int main(){
    int x=0,a=0,b=1,c;
    for(int i=1;i<=10;i++){
    x=a+x;
    c=a+b;
    a=b;
    b=c;
     }
     printf("%d",x);
    }
