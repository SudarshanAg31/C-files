#include<stdio.h>
int main(){
     int num1,num2,num3,min,max,mid;
    printf("enter three number: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3){
        max=num1;
    }
    else if(num2>num1 && num2>num3){
        max=num2;
    }
    else{
        max=num3;
    }
    
    if(num1<num2 && num1<num3){
        min=num1;
    }
    else if(num2<num1 && num2<num3){
        min=num2;
    }
    else{
        min=num3;
    } 
     mid=(num1*num2*num3)/(min*max);
     printf("%d",mid);
    return 0;
}