#include<stdio.h>
int main(){
    int arry[5];
    int pcount=0;
    int ncount=0;
    for(int i=0;i<5;i++){
        scanf("%d",&arry[i]);
    }
    for(int i=0;i<5;i++){
        if(arry[i]%2==0&&arry[i]>0){
            pcount++;
        }
    }
    for(int i=0;i<5;i++){
        if(arry[i]%2!=0&&arry[i]<0){
            ncount++;
        }
    }
    printf("\n%d",pcount);
    printf("\n%d",ncount);
    return 0;
}