#include<stdio.h>
#include<math.h>
int main(){
int n=5;
float x=0;
int a=2;
    for(int i=2;i<=n;i++){
        x=(a*i)+x;
    }
    printf("%.2f",x);
}