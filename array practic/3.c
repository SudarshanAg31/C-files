//WAP to input an array of N number of elements and find the sum and average of all the elements of that array
#include<stdio.h>
int main(){
    int n;
    int array[n];
    int sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
        sum=sum+array[i];
    }
    printf("%d",sum);
    return 0;
}
