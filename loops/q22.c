#include<stdio.h>
int main(){
    int x=0;
    for(int i=1;i<=20;i=i+2){
        x=(x*10)+i;
        printf("%d,",x);
    }
    return 0;
}
