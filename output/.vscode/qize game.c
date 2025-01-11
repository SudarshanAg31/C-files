#include<stdio.h>
#include<ctype.h>
int main(){
    printf("quize game..\n");
    char question[][100]={"1. what is 2+5?",    
                        "2. what is the color of tree?",
                        "3. in one G.B how many M.B are there?",
};
    char options[][100]={"A. 6","B. 8","C. 7","D. 10",
                        "A. yellow","B. green","C. white","D. red",
                        "A. 1000","B. 1200","C. 1240","D. 1024"
};
    char answer[]={'C','B','D'};
    char guess;
    int score=0;
    char questions=sizeof(question)/sizeof(question[0]);
    for(int i=0; i<questions;i++){
        printf("*******************\n");
        printf("%s\n",question[i]);
        printf("*******************\n");
    for(int j=(4*i);j<(4*i)+4;j++){
        printf("%s\n",options[j]);
    }
    scanf(" %c",&guess);
     guess=toupper(guess);
    if(guess==answer[i]){
        printf("*correct*\n");
    score++;
    }
    else{
        printf("*incorrect*\n");
    }
    }
    printf("*****************\n");
    printf("%d/%d\n",score,questions);
    printf("*****************\n");
return 0;
}