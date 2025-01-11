#include<stdio.h>
int main(){
    int a=0,b=0,c=1,d;
    for(int i=0;i<=10;i++){
        printf("%d ",a);
        d=a+b+c;
        a=b;
        b=c;
        c=d;
    }
}