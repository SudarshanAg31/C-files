#include<stdio.h>
int main(){
    int n,rem,rev=0,temp,count=0,count1=0;
    scanf("%d",&n);
    temp=n;
    while(temp){//163
        rem=temp%10;//3 6 1
        rev=(rev*10)+rem;//3 36 361
        temp=temp/10;//16 3 0
    }
    //n=163 & rev=361
    for(int i=1;i<=n;i++){
        if(n%i==0){
        count++;
        }
    }
    for(int i=1;i<=rev;i++){
       if(rev%i==0){
        count1++;
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