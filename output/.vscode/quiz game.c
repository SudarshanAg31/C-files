#include<stdio.h>
#include<ctype.h>
int main(){
    char qustion[][100]={"1. 1+1?",
                    "2. 2+2?",
                    "3. 3+3?"};
    char options[][100]={"A. 2","B. 4","C. 6","D. 8",
                        "A. 2","B. 4","C. 6","D. 8",                
                        "A. 2","B. 4","C. 6","D. 8"};
    char answer[]={'A','B','C'};
    char qustions= sizeof(qustion)/sizeof(qustion[0]);
    int score=0;
    char guess;
    for(int i=0;i<qustions;i++){
        printf("$$$$$$$$$$$$$$$$\n");
        printf("%s\n",qustion[i]);
        printf("$$$$$$$$$$$$$$$$\n");
    
        for(int j=(4*i);j<(4*i)+4;j++){
            printf("%s\n",options[j]);
        }
        scanf(" %c",&guess);
        scanf("%*c"); 
        guess=toupper(guess);    
    if(guess==answer[i]){
        printf("correct\n");
        score++;
    }
    else{
        printf("incorrect\n");
    }
    }   
    printf("%d/%d",score,qustions);                                 
    return 0;
}