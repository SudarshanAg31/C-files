#include<stdio.h>
int main(){
   int salary, total;
   printf("enter your month salary: ");
   scanf("%d",&salary);
    total=salary*12;
   if(total>250000){
    printf("you can pay tax");
   } 
   else{
    printf("you can't pay tax");
   }
    return 0;
}