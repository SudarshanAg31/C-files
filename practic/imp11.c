#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
    int flag=0;
        for(int j=2;j<=i;j++){
            if(i%j==0){
                flag++;
            }
        }
        if(flag==1){
    printf("%d,",i);
        }
    }
    return 0;
}