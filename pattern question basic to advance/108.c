#include<stdio.h>
int main(){
    for(int i=9;i>=5;i--){
        for(int j=i;j<=9;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}