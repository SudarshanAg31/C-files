#include <stdio.h>
#include <string.h>
int main(){
    char name[][12]={"sudarshan","tanvi","dhruv"};
    strcpy(name[1],"shriyansh");
    for(int i=0; i < sizeof(name)/sizeof(name[0]);i++)
    {
        printf("%s\n",name[i]);
    }
    return 0;
}