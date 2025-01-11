#include<stdio.h>
int main(){
    int x;
    int y=0;
    int z=0;
    for(int i=1;i<=10;i++){
    scanf("%d",&x);
    if(x%2==0){
    y=x+y;
    }
    else{
    z=x+z;
    }
    }
    printf("even: %d\n",y);
    printf("odd: %d\n",z);
    return 0;
}