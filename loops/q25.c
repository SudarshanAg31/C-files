#include<stdio.h>
int main(){
    int x=0;
    for(int i=1;i<=10;i++){
        x=(i*i)+x;
    }
    printf("%d",x);
    return 0;
}