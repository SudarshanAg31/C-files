#include<stdio.h>
int main(){
    int n,x;
    int hcf=0;
    scanf("%d%d",&x,&n);
    for(int i=1;i<=x;i++){
        if((x%i)==0&&(n%i)==0){
            hcf=i;
        }
    }
printf("%d",hcf);
    return 0;
}