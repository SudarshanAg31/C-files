#include<stdio.h>
#include<math.h>
int main(){
    int n=3;
    float x=0;

    for(float i=2;i<=n;i++){
        if((int)i%2==0){
          x=x+(-i/(i+1));  
        }
        else{
     x=((int)i/(i+1))+x;
        }
    }
     printf("%.2f",x);
}