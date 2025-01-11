#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);//4
    int arry[n];
    int num;
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arry[i]);//1 4 3 4
    }
    scanf("%d",&num);//4
    for(int i=0;i<n;i++){
        if(arry[i]==num){//true+
        count++;    //2
        }
    }
    if(count!=0){//true
    printf("%d\n",count);//2
    for(int i=0;i<n;i++){
        if(arry[i]==num){//1 3
        printf("%d ",i);    
        }
    }
    }
    else{
        printf("No");
    }
    return 0;
}