#include<stdio.h>
int main(){
    int arry[5];
    int pcount=0;
    int ncount=0;
    for(int i=0;i<5;i++){
        scanf("%d",&arry[i]);
        if(arry[i]>=0){
            pcount++;
        }
        else{
            ncount++;
        }
    }
    printf("%d\n",pcount);
    printf("%d",ncount);
    return 0;
}