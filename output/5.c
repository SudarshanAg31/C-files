#include<stdio.h>
int main(){
      int salary;
   printf("enter your month salary: ");
   scanf("%d",&salary);
   if(salary>25000){
    printf("you are rich");
   } 
   else{
    printf("you are poor");
   }
    return 0;
}