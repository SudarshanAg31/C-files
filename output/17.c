#include<stdio.h>
int main(){
    int time, amount;
     float sp, total;
     printf("enter time: ");
     scanf("%d",&time);
     printf("enter amount: ");
     scanf("%d",&amount);
     if(time>10){
        sp=(amount*time*10)/100;
        total=sp+amount;
        printf("simple intrest %.2f \n",sp);
        printf("total amount %.2f",total);
     }
     else{
        sp=(amount*time*8)/100;
        total=sp+amount;
        printf("simple intrest %.2f \n",sp);
        printf("total amount %.2f",total);
     }
    return 0;
}