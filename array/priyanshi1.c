#include<stdio.h>
int main(){
    float cost,selling;
    scanf("%f",&cost);//100
    scanf("%f",&selling);//500
    float total=0.0;
    if(cost<selling){//100<500
        total=((selling-cost)/cost)*100;
        printf("profit\n%.2f%%",total);
    }
    else if(cost==selling){
        printf("profit\n%.2f%%",total);
    }
    else{
        total=((cost-selling)/selling)*100;
        printf("loss\n%.2f%%",total);
    }
    return 0;
}