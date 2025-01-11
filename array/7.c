#include<stdio.h>
int main(){
    int arry[5];
    int esum=0;
    int osum=0;
    for(int i=0;i<5;i++){
        scanf("%d",&arry[i]);
        if(arry[i]%2==0){
         esum=arry[i]+esum; 
        }
        else{
            osum=arry[i]+osum;
        }
    }
    printf("%d\n",esum);
    printf("%d",osum);
    return 0;
}