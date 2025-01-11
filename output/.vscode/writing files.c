#include<stdio.h>
int main(){
    FILE *pf=fopen("C:\\Users\\SUDARSHAN\\Desktop\\text.html", "w");
    fprintf(pf,"hyy myself sudarshan agrawal\n");
    fprintf(pf,"\nhello world\n");
    fclose(pf);
    /*if(remove("text.txt") ==0){
        printf("ok");
    }
    else{
        printf("no");
    }*/
    return 0;
}