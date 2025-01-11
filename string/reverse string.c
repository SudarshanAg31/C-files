#include<stdio.h>
#include<string.h>
int main(){
    char a[40];
    scanf("%[^\n]s",a);
    /*int k=0;
    while(a[k]!=0){
        k++;
    }
    for(int i=k;i>=0;i--){
        printf("%c",a[i]);
    }*/

   
    strrev(a);
    printf("%s",a);
    return 0;
}