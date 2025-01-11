#include<stdio.h>
int main(){
    char name1[50],name2[50],name3[50],old[50],younger[50];
     int num1,num2,num3;
    printf("enter your name: ");
    scanf("%s",name1);
    printf("enter your age: ");
    scanf("%d",&num1);
    printf("enter your name: ");
    scanf("%s",name2);
    printf("enter your age: ");
    scanf("%d",&num2);
    printf("enter your name: ");
    scanf("%s",name3);
    printf("enter your age: ");
    scanf("%d",&num3);
    
    if(num1>num2&&num1>num3){
        old=name1;
    }
    else if(num2>num1&&num2>num3){
         old=name2;
    }
    else{
         old=name3;
    }

     if(num1<num2&&num1<num3){
         younger=name1;
    }
    else if(num2<num1&&num2<num3){
        younger=name2;
    }
    else{
         younger=name3;
    }
    printf("%s",old);
    printf("%s",younger);
    return 0;
}