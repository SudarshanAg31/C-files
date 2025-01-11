#include<stdio.h>
#include<math.h>
int main(){
int n=3;
float x=0;
    for(int i=1;i<=n;i++){
        x=(pow(n,i)/(i*i))+x;
    }
    printf("%.2f",x);
}