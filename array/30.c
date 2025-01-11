#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);//4
    int arry[x];
    int temp;
    for(int i=0;i<x;i++){
        scanf("%d",&arry[i]);//4 3 6 5
    }
    for(int i=0;i<x;i++){
        for(int j=i+1;j<x;j++){
            if(arry[i]>arry[j]) {//i=4 > j=3
            temp=arry[i];//temp=4
            arry[i]=arry[j];//i=3
            arry[j]=temp;//j=4
        }
      }
    }
    for(int i=0;i<x;i++){
        printf("%d ",arry[i]);//3 4 6 5
    }
    return 0;
}