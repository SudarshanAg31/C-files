#include<stdio.h>
int main(){
    int lcm,num,count=0,num1,hcf;
    scanf("%d%d",&num,&num1);
       for(int i=1;i<=num;i++){
        if(num%i==0&&num1%i==0){
         hcf=i;
        count++;
        }
       }
        lcm=(num*num1)/hcf;
       printf("\n%d",lcm);
       printf("\n%d",count);
    return 0;
}