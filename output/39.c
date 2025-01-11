#include<stdio.h>
int main(){
     int num;
    printf("enter runs: ");
    scanf("%d",&num);
    if(num>=100){
        printf("century");
    }
    else if(num<=99&&num>=50){
        printf("half century");
    }
    else{
        printf("not");
    }
    return 0;
}