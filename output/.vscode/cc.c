#include <stdio.h>
int main(){
 int number[][4]={
    {1,2,3},
    {4,5,6},
    {7,8,9},
    {10,11,12,14},
    {11,21,31}
    };
    int row=sizeof(number)/sizeof(number[0]);
    int col=sizeof(number[0])/sizeof(number[0][0]);
    printf("row: %d\n",row);
    printf("col: %d\n",col);
    for(int i=0;i<row;i++){
        printf("\n");
        for(int j=0;j<col;j++){
            printf("%d ",number[i][j]);

        }
    }
 
    return 0;
}