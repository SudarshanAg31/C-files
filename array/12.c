#include<stdio.h>
int main(){
    int arry[5];
    int arry1[5];
    for(int i=0;i<=4;i++){
        scanf("%d",&arry[i]);//1 2 3 4 5
        arry1[i]=arry[i];//1 2 3 4 5 
    }
    printf("\n");
    for(int i=4;i>=0;i--){//it reverse order
        printf("%d\n",arry1[i]);//5 4 3 2 1
    }
    return 0;
}