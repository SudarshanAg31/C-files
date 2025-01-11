#include<stdio.h>
int main(){
    int x=0;
    for(int i=1;i<=10;i++){
        if(i%2==0){
            x=(i*i)+x;
        }
        else{
            x=(i*i*i)+x;
        }
    }
    printf("%d",x);
    return 0;
}