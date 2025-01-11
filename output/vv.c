#include<stdio.h>
int main(){
    int money , big1, big ,small1 ,small,ramming;
    scanf("%d",&money);
    big1=money/2000;
    printf("\n\n\n\n\n%d\n",big1);
    money=money%2000;
    big=money/500;
    printf("%d\n",big);
    money=money%500;
    small1=money/100;
    printf("%d\n",small1);
    money=money%100;
    small=money/50;
    printf("%d\n",small);
    money=money%50;
    ramming=money;
    printf("%d\n",ramming);

    return 0;
}