#include<stdio.h>
#include<string.h>
int main(){
    char str[10];
    char x;
    int n;
    scanf("%[^\n]s",str);//string
    scanf("%d",&n);//1--->index
    scanf("%c",&x);//c
    for(int i=10;i>=n;i--){
        str[i+1]=str[i];
    }
    str[n]=x;
    printf("%s",str);
    return 0;
}