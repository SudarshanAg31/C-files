#include<stdio.h>
#include<math.h>
int main(){
    int n=13;
    float a=2;
    float x=0;
    float i;
    for(i=2;i<=n;i=i+3){
        x=(a/i)+x;
     }
     printf("%.2f",x);
    }
