#include<stdio.h>
int main(){
    int num;
    int total=0;
    scanf("%d",&num);
    for(int i=1;i<num;i++){
        if(num%i==0){
            total=total+i;
        }
    }
    if(total==num){
    printf("perfect");
    }
    else{
    printf("no");
    }
    return 0;
}