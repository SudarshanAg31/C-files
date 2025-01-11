//WAP to input an array of N number of elements and count total number of positives, negatives and zero elements in that array and display those counts.
#include<stdio.h>
int main(){
    int n;
    int arry[n];
    scanf("%d",&n);
    int count=0;
    int count1=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arry[i]);
    }
    for(int i=0;i<n;i++){
        if(arry[i]>0){
        printf("%d",arry[i]);
        count++;
        }
        else if(arry[i]==0){
            count1++;
        }
    
    printf("%d",count);
    printf("\n%d",count1);

    }
}