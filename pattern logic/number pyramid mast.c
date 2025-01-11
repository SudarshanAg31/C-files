#include<stdio.h>
int main(){
    int n,m;
    scanf("%d",&n);//4
    scanf("%d",&m);//7
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1){
            printf("*");
            }
        }
    printf("\n");
    break;
    }
    int x=m/2;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=x-i+1;j++){
            printf("*");
        }
        for(int j=1;j<=2*i-1;j++){
            printf(" ");
        }
        for(int j=1;j<=x-i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}