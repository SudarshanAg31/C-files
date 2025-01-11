#include<stdio.h>
int main(){
    for(int i=0;i<=500;i++){
        int num=i;

        int hum=num/100;
        num=num%100;

        int ten=num/10;
        num=num%10;

        int unit=num;  
        int x=(hum*hum*hum)+(ten*ten*ten)+(unit*unit*unit);
        if(i==x){
            printf("%d\n",x);
        }
    }
    return 0;
}