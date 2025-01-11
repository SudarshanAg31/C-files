#include<stdio.h>
#include<math.h>
int main(){
    int n;
    int x=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        x=x+pow(i,2);
    }
    printf("%d",x);
    return 0;
}