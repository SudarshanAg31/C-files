//WAP to input an array of N number of elements and swap the largest and 
//smallest element in that array and print the updated array
#include<stdio.h>
int main(){
    int n,x,y;//5
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){//5
        scanf("%d",&array[i]);//1 2 5 1 2 
    }
     int max=array[0];//1 
    for(int i=1;i<n;i++){ //1 2 3   
     if(array[i]>max){//2>1 t 5>2 1>5
        max=array[i];//2 5
         x=i;
     }
    }
     int min=array[0];//5
    for(int i=1;i<n;i++){ //5 4 3 2 1   
     if(array[i]<min){//4<5
        min=array[i];//
         y=i;
     }
    }
    array[x]=min;
    array[y]=max;
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    return 0;
}