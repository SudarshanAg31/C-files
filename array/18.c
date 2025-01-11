#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arry[size];
    int arry1[size];
    int arry2[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arry[i]);
    }
    for(int i=0;i<size;i++){
        scanf("%d",&arry1[i]);
    }
    for(int i=0;i<size;i++){
        arry2[i]=arry1[i]*arry[i];
        printf("%d ",arry2[i]);
    }
    return 0;
}