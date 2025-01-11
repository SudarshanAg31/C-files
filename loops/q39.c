#include<stdio.h>
#include<math.h>
int main(){
    int n=5;
    float x=0;
    float i;
    for(i=1;i<=n;i++){
        x=(pow(3,i)/i)+x;
     }
     printf("%.2f",x);
    }
