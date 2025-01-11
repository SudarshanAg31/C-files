#include<stdio.h>
#include<math.h>
int main(){
    int num,rem,sum=0,x;
    scanf("%d",&num);
    x=pow(num,2);
    while(x){
    rem=x%10;
    sum=rem+sum;
    x=x/10;
    }
    if(sum==num){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}