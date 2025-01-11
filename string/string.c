#include<stdio.h>
int main(){
    //char a[]={'h','e','l','l','o'};
    char a[]="hello sudarshan i think you are in love...!!!";
    for(int i=0;i<(sizeof(a)/sizeof(a[0]));i++){
    printf("%c",a[i]);
    }
    return 0;
}