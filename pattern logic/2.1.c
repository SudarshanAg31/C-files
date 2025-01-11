#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);//4
    for(int i=1;i<=n;i++){//4
        int x=1;
        for(int j=1;j<=i;j++){//1 2 3 4
            printf("%d",x);
            x=x+2;
        }
        printf("\n");
    }
    return 0;
}