#include<stdio.h>
int main(){
   int num;
   int max;
   scanf("%d",&num);
   max=num;
   for(int i=2;i<=10;i++){
    scanf("%d",&num);
    if(num>max){
        max=num;
    }
   }
   printf("%d",max);
    return 0;
}