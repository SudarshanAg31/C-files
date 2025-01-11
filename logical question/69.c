#include<stdio.h>
int main(){
    int num,rem,rev=0,temp;
    scanf("%d",&num);
    temp=num;
    while(num!=0){
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    if(temp==rev){
        printf("palindrome");
    }
    else{
        printf("no");
    }
    return 0;
}