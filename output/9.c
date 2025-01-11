#include<stdio.h>
#include<math.h>
int main(){
   int number,sqr,cub;
   printf("enter number: ");
   scanf("%d",&number);
   if(number%2==0){
    sqr=pow(number,2);
    printf("%d",sqr);
   } 
   else{
    cub=pow(number,3);
    printf("%d",cub);
   } 
    return 0;
}