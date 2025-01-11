#include<stdio.h>
int main(){
    char a;
   printf("enter alphanet: ");
   scanf("%c",&a);
   if(a=='a'|| a=='e'|| a=='i'|| a=='o'||a=='u'){
    printf("it's an vowel");
   }
   else{
    printf("it's an consonant");
   }
    return 0;
}