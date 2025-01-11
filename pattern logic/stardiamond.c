#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);//9
    int y=(n/2)+1;//4+1=5
    int z=n/2;
    for(int i=1;i<=y;i++){
        for(int j=1;j<=y-i;j++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }//z=4
    for(int i=1;i<=z;i++){// 1
        int x=z;//4
        for(int j=1;j<=i;j++){// 1
            printf(" ");
        }
        for(int j=1;j<=(2*x)-(2*i)+1;j++){// 7
            printf("*");
        }
        printf("\n");
    }
}