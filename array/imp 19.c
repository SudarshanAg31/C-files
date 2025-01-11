#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);//2
    int arry[size];
    int arry1[size];
    int x=size*2;//4
    int arry2[x];//4

    for(int i=0;i<size;i++){
        scanf("%d",&arry[i]);
    }

    for(int i=0;i<size;i++){
        scanf("%d",&arry1[i]);
    }
    
    for(int i=0;i<size;i++){
        arry2[i]=arry1[i];//1 2 3 4 5
        arry2[i+size]=arry[i];//5 4 3 2 1
    }
    for(int i=0;i<x;i++){
        printf("%d \n",arry2[i]);
    }
    return 0;
}