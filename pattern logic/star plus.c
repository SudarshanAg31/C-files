#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);//5
    for(int i=1;i<=n;i++){//1 2 3 4 5 
        for(int j=1;j<=n;j++){//1 2 * 4 5  1 2 * 4 5 
            if(j==(n/2)+1||i==(n/2)+1){
                printf("*");
            }
            else{
            printf(" ");
        }
        }
        printf("\n");
    }
    return 0;
}