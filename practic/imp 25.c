#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int temp=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);//1 2 3 4 
    }
    for(int i=0;i<n/2;i++){//1
        temp=arr[i];//0 1 
        arr[i]=arr[n-i-1];//1 4  
        arr[n-i-1]=temp;//4 1
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}