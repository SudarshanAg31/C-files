#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arry[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arry[i]);
    }
    int max=arry[0];
    int min=arry[0];
    for(int i=1;i<n;i++){
        if(arry[i]>max){
            max=arry[i];
        }
    }

    for(int i=1;i<n;i++){
        if(arry[i]<min){
            min=arry[i];
        }
    }
    int x=max-min;
    printf("%d",x);
    return 0;
}