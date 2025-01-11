#include<stdio.h>
int main(){
    int n;
    int flag=0;
    scanf("%d",&n);//4
    int num;
    int arry[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arry[i]);//5 4 3 2
    }
    scanf("%d",&num);//4
    for(int i=0;i<n;i++){
        if(arry[i]==num){//true
            flag++;//1
        }
    }
    if(flag==1){//true
        printf("yes");//yes
    }
    else{
        printf("no");
    }
    return 0;
}