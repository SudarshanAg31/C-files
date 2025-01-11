#include<stdio.h>
int main(){
    int arry[5];
    int sum=0;
    for(int i=0;i<5;i++){
        printf("%d:player ",i);
        scanf("%d",&arry[i]);//50 10 110 70 20
        sum=arry[i]+sum;//260
    }
    for(int i=0;i<5;i++){
        if(arry[i]>=50&&arry[i]<100){//50 
            printf("\n%d half century",i);
        }
    }
    for(int i=0;i<5;i++){
        if(arry[i]>=100){
            printf("\n%d century",i);
        }
    }
    printf("\nsum: %d",sum);

    return 0;
}