//WAP to input an array of N number of elements and find their standard deviation.
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int arry[n];
    float x=0.0;
    float y=0.0;
    for(int i=0;i<n;i++){
        scanf("%d",&arry[i]);
    }
    for(int i=0;i<n;i++){
        x=x+arry[i];
    }
    x=x/n;
    for(int i=0;i<n;i++){
        y=pow(arry[i]-x,2)+y;
    }
    y=y/n;
    y=sqrt(y);
    printf("%.2f",y);
    return 0;
}