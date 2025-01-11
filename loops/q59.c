#include<stdio.h>
int main(){
   int num;
   int count=0;
   for(int i=1;i<=10;i++){
    scanf("%d",&num);
    if(num%5==0){
        count++;
        printf("%d\n",num);
    }
   }
   printf("count: %d",count);
    return 0;
}