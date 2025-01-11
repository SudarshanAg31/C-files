#include<stdio.h>
int main(){
    for(int i=5;i<=9;i++){
        for(int j=5;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}