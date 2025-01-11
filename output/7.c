#include<stdio.h>
int main(){
    int total ,class, total1;
    char name[45];
    printf("enter your name: ");
    scanf("%s",&name);
    printf("enter number of classes: ");
    scanf("%d",&class);
    printf("enter total number of classes: ");
    scanf("%d",&total);
    total1=(class*100)/total;
    if(total1>85){
        printf("%s allowed to give exam",name);
    }
    else{
        printf("%s not allowed to give exam",name);
    }
    return 0;
}