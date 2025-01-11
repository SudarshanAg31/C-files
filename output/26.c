#include<stdio.h>
int main(){
    char a;
   printf("enter alphanet: ");
   scanf("%c",&a);
   if(a>='a'&& a<='z'){
    printf("it's an lower case");
   }
   else{
    printf("it's an upper case");
   }
    return 0;
}