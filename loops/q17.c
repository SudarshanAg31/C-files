#include<stdio.h>
int main(){
    int n=5;
    int x=1;
    for(int i=n;i>=1;i--){
        x=i*x;
    }
    printf("%d ",x);
}