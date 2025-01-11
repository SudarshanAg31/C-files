#include<stdio.h>
int main(){
    int n=10;
    float a=2;
    float x=0;
    float i;
    for(i=1;i<=n;i++){
        if((int)i%2==0){
        x=(a/i)+x;
        }
     }
     printf("%.2f",x);
    }
