#include<stdio.h>
enum name{sudarshan=1,tanvi=2,sagar=3,dhruv=4,shriyansh=5,harshit=6};
int main(){
      enum name head =tanvi-1;
    if(head==sudarshan || head==harshit){
        printf("they study B-tech cse");
    }
    else{
        printf("they are not a part of cse");
    }
    
    return 0;
}