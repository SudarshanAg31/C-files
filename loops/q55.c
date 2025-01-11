#include<stdio.h>
int main(){
    int x;
    int y=0;
    int z=0;
    for(int i=1;i<=10;i++){
    scanf("%d",&x);
    if(x<0){
    y=x+y;
    }
    else{
    z=x+z;
    }
    }
    printf("-ve: %d\n",y);
    printf("+ve: %d\n",z);
    return 0;
}