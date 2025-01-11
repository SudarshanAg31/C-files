#include<stdio.h>
int main(){
    int arry[5];
    int sum=0;
    for(int i=0;i<5;i++){
        scanf("%d",&arry[i]);
        sum=arry[i]+sum;
    }
    printf("\n%d",sum);
    return 0;
}