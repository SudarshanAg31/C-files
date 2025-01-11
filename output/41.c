#include<stdio.h>
int main(){
    int num;
    printf("enter number: ");
    scanf("%d",&num);
    if(num>=-9&&num<=9){
        printf("its one-digit");
    }
    else if(num>=-99&&num<=99){
        printf("its two-digit");
    }
    else if(num>=-999&&num<=999){
        printf("its three-digit");
    }
    return 0;
}