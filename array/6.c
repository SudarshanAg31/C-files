#include<stdio.h>
int main(){
    int arry[5];
    int ecount=0;
    int ocount=0;
    for(int i=0;i<5;i++){
        scanf("%d",&arry[i]);
        if(arry[i]%2==0){
         ecount++;   
        }
        else{
            ocount++;
        }
    }
    printf("%d\n",ecount);
    printf("%d",ocount);
    return 0;
}