#include<stdio.h>
int main(){
    int num,rem,rev=0;
    scanf("%d",&num);
    while(num){
    rem=num%10;
    rev=(10*rev)+rem;
    num=num/10;
    }
    printf("%d",rev);
    return 0;
}