#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arry[n][n];
    int arry1[n][n];
    int arry2[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          scanf("%d",&arry[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          scanf("%d",&arry1[i][j]);
        }
    }
    //logic
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          arry2[i][j]=0;
          for(int k=0;k<n;k++){
            arry2[i][j]=arry2[i][j]+(arry[i][k]*arry1[k][j]);
          }
        }
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        printf("%d\t",arry2[i][j]);
      }
      printf("\n");
    }
    return 0;
}