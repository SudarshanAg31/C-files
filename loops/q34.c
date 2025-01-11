#include<stdio.h>
int main(){
    int x=0,a=0,b=0,c=1,d;
    for(int i=1;i<=10;i++){
    x=a+x;
    d=a+b+c;
    a=b;
    b=c;
    c=d;
     }
     printf("%d",x);
    }
