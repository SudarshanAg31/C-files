#include<stdio.h>
#include<string.h>
int main(){
    char str[40];//max size 
    scanf("%[^\n]s",str);// input

    int k=0;//string start
    while(str[k]!='\0'){//untill string !='\0'
        k++;
    }
    //reverse string
    for(int i=0;i<k;i++){
        for(int j=i+1;j<k;j++){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    }
//print reverse string 
    puts("reverse string:");
    puts(str);
    return 0;
}