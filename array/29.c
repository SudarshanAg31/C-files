#include<stdio.h>
int main(){
    int arry[100];
    int x;
    scanf("%d",&x);//4
    int num;
    int indx;
    for(int i=0;i<x;i++){
        scanf("%d",&arry[i]);// 1 2 3 4
    }
    scanf("%d",&num);//2
    for(int i=0;i<x;i++){
        if(arry[i]==num){
            indx=i;// 1
            break;
        }
    }
    for(int i=indx+1;i<x;i++){// 3 4
        arry[i-1]=arry[i];//at indx 1 value 3, 2 value 4 
    }
    for(int i=0;i<x-1;i++){
        printf("%d ",arry[i]);
    }
}