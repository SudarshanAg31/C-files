#include<stdio.h>
int main(){
float basic,amount;
scanf("%f",&basic);
int da=5;
int hra=8;
int ta=6;
int pf=10;
int gs=basic+da+hra+ta-pf;
amount=(da*basic)/100;
printf("%f\n",amount);
amount=(hra*amount)/100;
printf("%f\n",amount);
amount=(ta*amount)/100;
printf("%f\n",amount);
amount=(pf*amount)/100;
printf("%f\n",amount);
    return 0;
}