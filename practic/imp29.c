#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int value;
    int index=0;
    scanf("%d",&value);
    for(int i=0;i<n;i++){
        if(arr[i]==value){
            index=i;
            break;
        }
    }
    if(index==0){
        printf("no");
        return 0;
    }
    for(int i=index;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
return 0;
}