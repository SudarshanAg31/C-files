#include<stdio.h>
#include<math.h>
int add(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int sum=add(a,b);
    int x=fmin(a,b);
    printf("%d\n",sum);
    printf("%d",x);

    return 0;
}