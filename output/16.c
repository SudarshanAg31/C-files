#include<stdio.h>
int main(){
    int radious,choice;
    float area, circleference;
    printf("enter radious: ");
    scanf("%d",&radious);
    printf("enter choice: ");
    scanf("%d",&choice);
    if(choice==1){
        area=3.14*radious*radious;
        printf("%.2f",area);
    }
    else{
        circleference=2*3.14*radious;
        printf("%.2f",circleference);
    }
    return 0;
}