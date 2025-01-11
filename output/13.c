#include<stdio.h>
int main(){
    int age,age1;
    char name[43];
    char name1[43];
    printf("person 1 enter your age: ");
    scanf("%d",&age);
    printf("person 1 enter your name: ");
    scanf("%s",&name);
    printf("person 2 enter your age: ");
    scanf("%d",&age1);
    printf("person 2 enter your name: ");
    scanf("%s",&name1);
    if(age>age1){
        printf("%s is elder \n",name);
        printf("%s is younger ",name1);
    }
    else{
        printf("%s is elder\n ",name1);
        printf("%s is younger ",name);
    }
    return 0;
}