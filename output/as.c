#include <stdio.h>
int main() {
   int N,S,C,H,L,T;
   scanf("%d%d%d%d%d%d",&N,&S,&C,&H,&L,&T);
   if(N>L){
      N=N-L;
      H=S*C;   
      T=H/T;  
      if(N>T){
         printf("Padhai karenge");
      }
   }
   else{
      printf("Goa Jaayenge");
   }
   return 0;
}