#include<stdio.h>
#include<math.h>
int main(){
    int num,temp,rem,count=0,count1=0,total=0;
    scanf("%d",&num);
    temp=num;
    while(temp){
        temp=temp/10;
        count++;
    }
    temp=num;
    for(int i=1;i<=temp;i++){
        if(temp%i==0){
    while(temp){//143
        rem=temp%10;//3
        total=pow(rem,count)+total;
        temp=temp/10;
        count1++;
    }          
    }  
    }
    if(count1==2){//prime
    if(total==num){//armstrong
        printf("yes");
    }    
    }
    else{
        printf("no");
    }
    return 0;
}