#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    int number1=(rand()%7);
    printf("%d",number1);
    return 0;
 
}