#include<stdio.h>
int main(){
   int age;
   printf("enter your age: ");
   scanf("%d",&age);
   if(age>=60){
    printf("you are senior citizen");
   } 
   else{
    printf("you are not a senior citizen");
   }
    return 0;
}