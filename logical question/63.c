#include<stdio.h>
int main(){
    int num,count=0,num1;
    scanf("%d%d",&num,&num1);
       for(int i=1;i<=num;i++){
        if(num%i==0&&num1%i==0){
         printf("%d ",i);
        count++;
        }
       }
       printf("\n%d",count);
    return 0;
}