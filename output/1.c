#include<stdio.h>
int main(){
    int marks,sub1,sub2,sub3;
    float avg;
    printf("enter your sub1 marks: ");
    scanf("%d",&sub1);
    printf("enter your sub2 marks: ");
    scanf("%d",&sub2);
    printf("enter your sub3 marks: ");
    scanf("%d",&sub3);
    marks=sub1+sub2+sub3;
    avg=(float)marks/3;
    if(avg>=33){
        printf("pass");
    }
    else{
        printf("fail");
    }
    printf("\n.2%f",avg);
    return 0;
}