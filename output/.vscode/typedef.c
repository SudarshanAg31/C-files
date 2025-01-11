#include<stdio.h>
typedef struct
{
    int rollnumber;
    char password[20];
    char name[50];
}user;
int main(){
   user user1={12,"pasward123","sudarshan agrawal"};
   user user2={122,"paward1234","tanvi"};
  printf("%s\n",user1.name);
  printf("%s\n",user1.password);
  printf("%d\n",user1.rollnumber);
  printf("\n");
  printf("%s\n",user2.name);
  printf("%s\n",user2.password);
  printf("%d\n",user2.rollnumber);
    return 0;
}