#include<stdio.h>
int main(){
    int x=15;
    for(int i=5;i<=9;i++){
        for(int j=5;j<=i;j++){
            printf("%d ",x--);
        }
        printf("\n");
    }
}