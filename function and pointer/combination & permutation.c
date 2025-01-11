#include<stdio.h>
int factorial(int n){
    int x=1;
    for(int i=n;i>=1;i--){
        x=x*i;
    }
    return x;
}
int combination(int a,int b){
int nfact=factorial(a);//n! 7
int rfact=factorial(b);//r! 3
int nrfact=factorial(a-b);//n-r! 5
return nfact/(rfact*nrfact);
}
void pascaltriangle(int r){//7 3

for(int i=0;i<=r;i++){
    for(int j=0;j<=r-i-1;j++){
    printf(" ");
    }
for(int j=0;j<=i;j++){
    int icj=combination(i,j);
    printf("%d ",icj);
}
printf("\n");
}
}
int main(){
int a;
scanf("%d",&a);//6
int h=a-1;//5
pascaltriangle(h);//5
    return 0;
}