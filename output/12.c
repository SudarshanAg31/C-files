#include<stdio.h>
int main(){
     int num1,num2;
    printf("enter 1 number: ");
    scanf("%d",&num1);
    printf("enter 2 number: ");
    scanf("%d",&num2);
    if(num1<num2){
        printf("%d",num1);
    }
    else{
        printf("%d",num2);
    }
    return 0;
}