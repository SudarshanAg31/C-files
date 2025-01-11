#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arry[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arry[i]);
    }
    int max1=arry[0];
    int max2=0;
    for(int i=1;i<n;i++){
    if(max1<arry[i]){
        max2=max1;
        max1=arry[i];
    }
    else if(max2<arry[i]&&max1!=arry[i]){
        max2=arry[i];
    }
    }
    int x=max1-max2;
    printf("%d",x);
    return 0;
}