#include <stdio.h>
#include <string.h>
struct player{
    int score;
    char name[50];
};
int main(){
struct player player1;
struct player player2;
strcpy(player1.name,"sudarshan");
player1.score=100;
strcpy(player2.name,"tanvi");
player2.score=10;
printf("%d\n",player1.score);
printf("%s\n\n",player1.name);
printf("%d\n",player2.score);
printf("%s\n",player2.name);
    return 0;
}