#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("enter three number: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1<num2 && num1<num3){
        printf("num1 is mim");
    }
    else if(num2<num1 && num2<num3){
        printf("num 2 is min");
    }
    else{
        printf("num 3 is min");
    } 
    return 0;
}