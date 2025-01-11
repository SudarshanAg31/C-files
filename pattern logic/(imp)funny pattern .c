#include<stdio.h>
int main(){
    int n;
    printf("apne lund ka size likh he(inch):");
    scanf("%d",&n);//7
    for(int i=1;i<=n;i++){//7
        for(int j=1;j<=n+2;j++){//9
            if(i<=n&&j<=(n/2)+1){
            printf(" ");
            }
            if(i==1&&j>n/2+1||j==(n/2)+2||j==n+2||i==n/2&&j>n/2+1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    for(int i=1;i<=n/2;i++){
        for(int j=1;j<=3*n;j++){
        if(i==1||i==n/2||j==1||j==n+2||j==n+7||j==3*n){
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