#include<stdio.h>
int main(){
    int n,m;
    scanf("%d",&n);//4
    scanf("%d",&m);//6
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1||i==n||j==1||j==m){
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