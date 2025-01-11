#include<stdio.h>
#include<string.h>
int main(){
    char a[40];
    scanf("%[^\n]",a);
   /* int x=0;
    while(a[x]!=0){
        x++;
    }
    printf("%d",x);
    */
    int x=strlen(a);
    printf("%d",x);
    return 0;
}