#include<stdio.h>
int main(){
    int num,count=0;
    scanf("%d",&num);
       for(int i=1;i<=num;i++){
        if(num%i==0){
            count++;
            printf("%d ",i);
        }
       }
       printf("\n%d",count);
    return 0;
}