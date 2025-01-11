#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    const int min=1;
    const int max=100;
    int guess;
    int guesses=0;
    int answer;
    srand(time(0));
    answer=(rand()%max)+min;
    do{
        printf("enter number:\n");
        scanf("%d",&guess);
        if(guess>answer){
            printf("its too high\n");
        }
        else if (guess<answer)
        {
            printf("its to low\n");
        }
        else{
            printf("correct\n");
            break;
        }  
     guesses++;
    }while(guess !=answer);
    printf("%d\n",answer);
    printf("%d\n",guesses);
    return 0;
}