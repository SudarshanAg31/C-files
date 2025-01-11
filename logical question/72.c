#include<stdio.h>
int main(){
    int num,rem,sum=0,temp;
    scanf("%d",&num);
    temp=num;
    while(temp){//32
        rem=temp%10;//2  3
        sum=rem+sum;//2 5
        temp=temp/10;// 0
    }
    temp=num;
    if(num%sum==0){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}