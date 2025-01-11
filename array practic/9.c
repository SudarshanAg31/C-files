//WAP to input an array of N number of elements and
// find the largest element in that array
#include<stdio.h>
int main(){
    int n;//5
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){//5
        scanf("%d",&array[i]);//1 2 5 1 2 
    }
    int max=array[0];//1 
    for(int i=1;i<n;i++){ //1 2 3   
     if(array[i]>max){//2>1 t 5>2 1>5
        max=array[i];//2 5
     }
    }
    printf("%d",max);
    return 0;
}