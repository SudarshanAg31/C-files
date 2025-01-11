#include<stdio.h>
#include<math.h>
int main(){
    int n=3;
    float x=0;
    int y=0;
    for(int i=0;i<=n;i++){
       y=(pow(10,i)+y);
       x=(((float)i+1)/y)+x;
    }
     printf("%.2f",x);
}