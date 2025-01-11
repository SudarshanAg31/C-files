#include<stdio.h>
int main(){
    int n,sum ;
    scanf("%d",&n);//12345
    while(n>=10)//true true
    {
    sum=0;
    while(n>0){//true true
        sum=sum+n%10;//5+4+3+2+1=15       5+1
        n=n/10;//1234 123 12 1            1
    }
    n=sum;//15 6
    }
    printf("%d",n);
    return 0;
}