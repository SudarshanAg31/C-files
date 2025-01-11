#include<stdio.h>
int main(){
    int max;
    int arry[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arry[i]);
    max=arry[0];
    if(arry[0]<arry[i]){
        max=arry[i];
    }
    }
    printf("%d",max);
    return 0;
}