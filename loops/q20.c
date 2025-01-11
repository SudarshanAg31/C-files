#include<stdio.h>
#include<math.h>
int main(){
    int n=10;
    int x=0;
    for(int i=0;i<n;i++){
        x=((x*10)+1);
        printf("%d ",x);
    }
}