#include<stdio.h>
int main(){
    FILE *readfile=fopen("C:\\Users\\SUDARSHAN\\Desktop\\reading file.txt", "r");
     char read[500];
    if(readfile == NULL){
        printf("file not found");
    } 
    else{
       for(int i=0;i<=3;i++){
    fgets(read,500,readfile);
    printf("%s",read); 
    }
    }  
    fclose(readfile);
    return 0;
}