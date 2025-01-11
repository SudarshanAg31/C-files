#include<stdio.h>
int main(){
    int x=0;
    for(int i=1;i<=10;i++){
        x=((i*i)-1)+x;
    }
    printf("%d",x);
    return 0;
}