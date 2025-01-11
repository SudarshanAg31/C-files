#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);//4
    int arry[100];
    int num,pos;
    for(int i=0;i<n;i++){
    scanf("%d",&arry[i]);//4 3 2 1
    }
    scanf("%d",&pos);//2
    scanf("%d",&num);//69
    for(int i=n-1;i>=pos-1;i--){
        arry[i+1]=arry[i];
    }
        arry[pos-1]=num;
    printf("\n\n");
    for(int i=0;i<=n;i++){
    printf("%d ",arry[i]);//4 3 2 69 1
    }
    return 0;
}