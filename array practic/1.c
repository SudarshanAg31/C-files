//WAP to input an array of N number of elements and display it.
#include<stdio.h>
int main(){
    int n;
    int array[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d",array[i]);
    }
    return 0;
}