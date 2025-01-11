#include<stdio.h>
int main(){
    int num,rem,flag=0,temp;
    scanf("%d",&num);
    temp=num;
    if(temp==0){
        flag=1;
    }
    while(temp){//42056
        rem=temp%10;//6 5 0
        if(rem==0){
            flag=1;
            break;
        }
        temp=temp/10;//42056 4205 420 
    }
    if(flag==1){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}