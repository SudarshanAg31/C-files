#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int indix=0;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[indix]=arr[i];
            indix++;
        }
    }
    while(indix<n){
        arr[indix]=0;
        indix++;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}