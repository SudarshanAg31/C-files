#include<stdio.h>
#include<math.h>
int main(){
    int n=5;
    float a=2;
    float x=0;
    float i;
    for(i=1;i<=n;i++){
        x=(a/pow(2,i))+x;
     }
     printf("%.2f",x);
    }
