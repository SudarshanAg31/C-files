#include<stdio.h>
int main(){
   int number;
   printf("enter number");
   scanf("%d",&number);
   if(number%7==0&& number%10==7){
    printf("it's a buzz number");
   }
   else{
    printf("it's not a buzz number");
   }
    return 0;
}