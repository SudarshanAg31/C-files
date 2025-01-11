#include<stdio.h>
int main(){
    //(*)it is   
    int age=10;//vlaue
    int *pAge=&age;//address of age is store in pAge
    printf("age: %d\n",age);//10
    printf("address: %p\n",&age);//0061FF1C
    printf("address age store in page: %p\n",pAge);//0061FF1C
    printf("age store in pAge: %d\n",*pAge);//10
    printf("print address of pAge: %p\n",&pAge);//0061FF18
    return 0;
}