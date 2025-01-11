#include<stdio.h>
int main(){
   char a;
   printf("enter alphanet: ");
   scanf("%c",&a);
   if((a>='A'&& a<='Z')||(a>='a'&& a<='z')){
    printf("it's an alphabet");
   }
   else{
    printf("it's not an alphabet");
   }
    return 0;
}