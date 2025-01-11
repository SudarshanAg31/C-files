#include<stdio.h>
int main(){
   int size;
   scanf("%d",&size);
   int arry[size];
   int arry1[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arry[i]);
        if(arry[i]<0){
            arry1[i]=-arry[i];
        }
        else{
            arry1[i]=-arry[i];
        }
    }
    for(int i=0;i<size;i++){
        printf("%d\n",arry1[i]);
    }
    return 0;
}