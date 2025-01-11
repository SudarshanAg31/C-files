#include<stdio.h>
int main(){
    int num;
    printf("enter number: ");
    scanf("%d",&num);
    if(num>0){
        printf("+ve");
    }
    else if(num<0){
        printf("-ve");
    }
    else{
        printf("zero");
    }
    return 0;
}