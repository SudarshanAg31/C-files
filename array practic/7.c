//Suppose there is president election in US and there are 2 candidates Trump and Biden.
// Input the votes of both the candidates in 10 states of US and 
//calculate state-wise winner and overall winner.
#include<stdio.h>
int main(){
    int arrayT[10];
    int arrayB[10];
    int x=0;
    int y=0;
    for(int i=0;i<10;i++){
        scanf("%d",&arrayT[i]);
    }
    for(int i=0;i<10;i++){
        scanf("%d",&arrayB[i]);
    }
    for(int i=0;i<10;i++){
        if(arrayT[i]>arrayB[i]){
            int state=i+1;
            printf("%d trump winner\n",state);
        }
        else{
            int state=i+1;
            printf("%d biden winner\n",state);
        }
    }

    for(int i=0;i<10;i++){
        x=arrayT[i]+x;
        y=arrayB[i]+y;
    }
    if(x>y){
        printf("trump winner\n");
    }
    else{
        printf("trump biden\n");
    }
    return 0;
}