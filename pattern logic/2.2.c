#include<stdio.h>
int main(){
    int n,a;
    scanf("%d",&n);//4
    for(int i=1;i<=n;i++){
          a=65;
        for(int j=1;j<=i;j++){
            char ch=(char)a;
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}