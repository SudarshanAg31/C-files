#include <stdio.h>
int main(){
int n[50];
int temp;
printf("enter ramdom number: \n");
for(int i=0;i<5;i++){
    scanf(" %d",&n[i]);
}
for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
        if(n[i]>n[j]){
            temp=n[i];
            n[i]=n[j];
            n[j]=temp;
        }
    }
}
for(int i=0;i<5;i++){
printf("%d,",n[i]);
}
    return 0;
}