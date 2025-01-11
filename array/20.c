#include<stdio.h>
int main(){
    int m;
    int n;
    scanf("%d",&m);//5
    scanf("%d",&n);//4
    int arry[m];
    int arry1[n];
    int x=m+n;//9
    int arry2[x];
    for(int i=0;i<m;i++){
        scanf("%d",&arry[i]);//5 4 3 2 1
    }
    for(int i=0;i<n;i++){
        scanf("%d",&arry1[i]);//1 2 3 4
    }
    for(int i=0;i<m;i++){//5
        arry2[i]=arry[i];//5 4 3 2 1
    }    
    for(int i=0;i<n;i++){//4 
        arry2[i+m]=arry1[i];//9 8 7 6
    }
    for(int i=0;i<x;i++){//9
        printf("%d\n",arry2[i]);//5 4 3 2 1 9 8 7 6 
    }
    return 0;
}