#include<stdio.h>
int main(){
    int cost,selling, profit,loss,losses;
    printf("enter cost price");
    scanf("%d",&cost);
    printf("enter selling price");
    scanf("%d",&selling);
    if(selling>cost){
    profit=(cost*100)/selling;
    printf("profit= %d",profit);
    }
    else{
        loss=cost-selling;
        losses=(loss*100)/cost;
    printf("loss= %d",losses);
    }
    return 0;
}