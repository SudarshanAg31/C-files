#include<stdio.h>
int main(){
    char a;
   printf("enter alphanet: ");
   scanf("%c",&a);
   if(a>='A'&& a<='Z'){
    printf("it's an uppercase");
   }
   else{
    printf("it's an lower case");
   }
    return 0;
}