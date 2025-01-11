#include<stdio.h>
int main(){
    FILE *webpage = fopen("C:\\Users\\SUDARSHAN\\Desktop\\web page.html","a");
    fprintf(webpage,"\n sudarshan is the owner of the web site");
    fclose(webpage);
    if(remove("C:\\Users\\SUDARSHAN\\Desktop\\web page.html")==0){
        printf("ok");
    }
    else{
        printf("no");
    }
    return 0;
}