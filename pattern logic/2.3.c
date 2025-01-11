#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);//4
    for(int i=1;i<=n;i++){
        int a=65;
        for(int j=1;j<=i;j++){
            if(i%2!=0){
                printf("%d ",j);//1
            }
            else{
                char ch=(char)a;//65-->A 66-->B
                printf("%c ",ch);//A B
                a++;//65-->66 66-->67
            }
        }
        printf("\n");
    }
    return 0;
}