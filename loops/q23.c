#include<stdio.h>
int main(){
    int x=0;
    for(int i=1;i<=20;i++){
        if(i%2==0){
            x=i+x;
        }
    }
    printf("%d",x);
    return 0;
}