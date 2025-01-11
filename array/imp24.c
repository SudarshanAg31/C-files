#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);//4
    int arry[n];
    int arry1[n];
    int x=n*2;//8
    int arry2[x];
    int temp;
    for(int i=0;i<n;i++){
        scanf("%d",&arry[i]);//1 2 3 4
    }
    for(int i=0;i<n;i++){
        scanf("%d",&arry1[i]);//9 8 7 6
    }
    for(int i=0;i<n;i++){
        arry2[i]=arry[i];//1 2 3 4
        arry2[i+n]=arry1[i];//9 8 7 6
    }
    for(int i=0;i<x;i++){
        for(int j=i+1;j<x;j++){
            if(arry2[i]>arry2[j]){//5 4
                temp=arry2[i];
                arry2[i]=arry2[j];
                arry2[j]=temp;
            }
        }
    }
    for(int i=0;i<x;i++){
        printf("%d\n",arry2[i]);
    }
    return 0;
}