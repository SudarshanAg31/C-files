#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
        if(num%10==7&&num%7==0){
            printf("it buzz");
        }
        else{
            printf("no");

        }
    return 0;
}