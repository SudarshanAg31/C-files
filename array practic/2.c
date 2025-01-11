//WAP to input an array of N number of elements and display it in reverse order.
#include<stdio.h>
int main(){
    int n;
    int array[n];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&array[i]);
    }
    for(int i=n;i>=1;i--){
        printf("%d",array[i]);
    }
    return 0;
}