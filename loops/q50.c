#include<stdio.h>
#include<math.h>
int main(){
    int n=3;
    int a=2;
    int b=2;
    int c=2;
    float x=0;
    int i;
    for(i=0;i<=n;i++){
     x=(pow(a,i)/(pow(b,i+1)+pow(c,i+2)))+x;
    }
     printf("%.2f",x);
}