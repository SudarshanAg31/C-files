#include<stdio.h>
int main(){
    FILE*tanvi=fopen("C:\\Users\\SUDARSHAN\\Desktop\\cc.txt","r");
    char sudarshan[250];
    if(tanvi==NULL){
        printf("chutiya hai aap");
    }
    else{
    while(fgets(sudarshan,250,tanvi)!=NULL){
    printf("%s",sudarshan);
    }
    }
    fclose(tanvi);
    return 0;
}