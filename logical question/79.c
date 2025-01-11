#include<stdio.h>
int main(){
    int n,a,count=0,count1=0;
    scanf("%d%d",&n,&a);// 5 7
    if(a==n+2||n==a+2){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }

     for(int i=1;i<=a;i++){
        if(a%i==0){
            count1++;
        }
    }
    }
    if(count==2&&count1==2){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}