#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);//5
    for(int i=0;i<2*n-1;i++){//0 1 2 3 4 5 6 7 8 (9)
    if(n<i){
        for(int j=0;j<=i;j++){//0 1 2 3 4
            printf("*");
        }
        printf("\n");
    }
    else{
        for(int j=0;j<2*n-i;j++){//0 1 2 3 4
            printf("*");
        }
        printf("\n")  ; 
    }
    }
    return 0;
}