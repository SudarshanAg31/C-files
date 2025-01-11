#include<stdio.h>
int main(){
    int arry[5];
    int max;
    int min;
    for(int i=0;i<5;i++){
        scanf("%d",&arry[i]);//5 4 7 1 2
    }
    max=arry[0];//5
    min=arry[0];//5
    for(int i=1;i<5;i++){
    if(arry[0]<arry[i]){//5<
        max=arry[i];//7
    }
    if(arry[0]>arry[i]){
        min=arry[i];
    }
    }
    printf("%d\n",max);
    printf("%d\n",min);
    return 0;
}