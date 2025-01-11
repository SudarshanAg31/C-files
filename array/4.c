#include<stdio.h>
int main(){
    int arry[5];
    int count=0;
    for(int i=0;i<5;i++){
        scanf("%d",&arry[i]);
        if(arry[i]>0){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}