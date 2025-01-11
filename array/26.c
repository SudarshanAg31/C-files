#include<stdio.h>
int main(){
    int num;
    int n;
    scanf("%d",&n);//4
    int count=0;
    int arry[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arry[i]);//1 4 3 4 
    }
    scanf("%d",&num);//4
    for(int i=0;i<n;i++){
        if(arry[i]==num){//true+
            count++;//2
        }
    }
    if(count!=0){//true
        printf("yes\n");//yes
        printf("%d",count);//2
    }
    else{
        printf("no");
    }
    return 0;
}