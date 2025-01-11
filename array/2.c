#include<stdio.h>
int main(){
    int min; 
    int arry[5];
    for(int i=0;i<5;i++){
       scanf("%d",&arry[i]);// 5 4 3 2 1
    min=arry[0];//5
    if(arry[0]>arry[i]){//5>1 5>2 5>3 5>4
        min=arry[i];//true+++
    }
    }
    printf("%d",min);//1

    return 0;
}