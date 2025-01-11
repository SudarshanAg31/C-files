#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int x=0;
    int y=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            x=x+arr[i][j];
            y=y*arr[i][j];
        }
    }
printf("%d\n",x);
printf("%d",y);
}