#include<stdio.h>
int main(){
    int arry[5];
    int arry1[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arry[i]);
        arry1[i]=arry[i];    
    }
    for(int i=0;i<5;i++){
        printf("%d",arry1[i]);
    }
    return 0;
}