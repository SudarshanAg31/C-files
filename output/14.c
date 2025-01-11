#include<stdio.h>
int main(){
    int l, b;
    printf("enter l");
    scanf("%d",&l);
    printf("enter b");
    scanf("%d",&b);
    if(l==b){
        printf("it's a square");
    }
    else{
        printf("it's a ractangle");
    }
    return 0;
}