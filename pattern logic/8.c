#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);//5
    for(int i=0;i<n;i++){//5 4 3 2 1
        //space
        for(int j=0;j<i;j++){//5-5 5-4 5-3 5-2 5-1 
            printf(" ");
        }
        //print
        for(int j=1;j<=n*2-(2*i+1);j++){//9 7 5 3 1  
            printf("*");
        }
        //space
        for(int j=0;j<i;j++){//5-5 5-4 5-3 5-2 5-1
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}