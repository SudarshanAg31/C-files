#include<stdio.h>
int main(){
    int arry[5];
    int i;
    for( i=0;i<5;i++){
        scanf("%d",&arry[i]);//1 2 3 4 5
    }
    for(int i=0;i<5;i++){//1 2 3 4 5
        if(arry[i]%2==0){//false true false true false
        printf("%d,",arry[i]);//2 4
        }
    }
        printf("\n");//next line
     for(int i=0;i<5;i++){//1 2 3 4 5
        if(arry[i]%2==1){//true false true false true
        printf("%d,",arry[i]);//1 3 5
        }
    }
    return 0;
}