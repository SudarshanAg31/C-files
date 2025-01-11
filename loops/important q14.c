#include<stdio.h>
int main(){
 
    for(int i=2;i<=20;i=i+2){
        if(((i/2)%2) != 0){
            printf("%d,",i);  
        }
        else{
            printf("-%d,",i);  
        }

    }
}