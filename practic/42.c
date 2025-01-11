#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    gets(a);
    char x;
    scanf("%c",&x);
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==x){
            printf("%d ",i+1);
        }
    }
}