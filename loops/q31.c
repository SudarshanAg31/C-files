#include<stdio.h>
int main(){
    int x=0;
    for(int i=2;i<=20;i=i+2){
      if((i/2)%2!=0){
       x=i+x;
      }
      else{
        x=((-i)+x);
      }
    }
    printf("%d ",x);
    return 0;
}