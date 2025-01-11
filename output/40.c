#include<stdio.h>
int main(){
     int num;
    printf("enter number b/w (1-7): ");
    scanf("%d",&num);
    if(num==1){
        printf("monday");
    }
    else if(num==2){
        printf("tuesday");
    }
    else if(num==3){
        printf("wednesday");
    }
    else if(num==4){
        printf("thursday");
    }
    else if(num==5){
        printf("friday");
    }
    else if(num==6){
        printf("saturday");
    }
    else if(num==7){
        printf("sunday");
    }
    else{
        printf("enter number b/w (1-7)\n");
    }
    return 0;
}