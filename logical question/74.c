#include<stdio.h>
#include<math.h>
int main(){
    int num,x,temp,count=0,rem,flag=0;
    scanf("%d",&num);//5
    x=pow(num,2);//25
    temp=num;//5
    while(temp){//5
        temp=temp/10;//0
        count++;//1
    }
    
    while(x){//25
    int y;
    y=pow(10,count);
        rem=x%y;//5
        if(rem==num){//5==5
            flag=1;
            break;
        }
    }
if(flag==1){
    printf("yes");
}
else{
    printf("no");
}
}