#include<stdio.h>
#include<math.h>
int main(){
    int num,rem,temp,count=0,total=0;
    scanf("%d",&num);
    temp=num;
    while(temp){//153
        temp=temp/10;//15 1 0
        count++;
    }     
    temp=num;
    while(temp){
        rem=temp%10;//3 5 1
        total=(pow(rem,count))+total;
        temp=temp/10;//15 1 0
    }
    if(num==total){
       printf("yes");
   }
    else{
       printf("no");
   }
   return 0;
}