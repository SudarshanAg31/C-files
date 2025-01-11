#include<stdio.h>
int main(){
    int a=0;
    int b=1;
    int c;
    for(int i=1;i<=10;i++){
        printf("%d ",a);
        c=a+b;
        a=b;//1 1 3
        b=c;//1 3 5
    }
}