#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);//9
    int arry[x];
    int temp;
    for(int i=0;i<x;i++){
        scanf("%d",&arry[i]);//9 7 6 5 4 3 2 1
    }
    for(int i=0;i<x;i++){
        for(int j=i+1;j<x;j++){
            if(arry[i]>arry[j]){
                temp=arry[i];
                arry[i]=arry[j];
                arry[j]=temp;
            }
        }
    }
    //1 2 3 4 5 6 7 8 9
    int num;
    scanf("%d",&num);//7
    int min=0;//0
    int max=x-1;//8
    int mid;//5
    while(min<=max){
    mid=(max+min)/2;//4
    if(arry[mid]==num){
        printf("%d",mid);
    }
    if(arry[mid]<num){//7<5
        min=mid+1;
    }
    else{
        max=mid-1;
    }
    }
    return 0;
}