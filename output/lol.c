#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
   /*const double pi=3.14;
   double area;
   double length;
   double breath;
   double paremeter;
   printf("WHAT IS THE LENGTH OF RACTANGLE");
   scanf("%lf",&length);
   printf("WHAT IS THE BREATH OF RACTANGLE");
   scanf("%lf",& breath);
    paremeter= 2*(length+breath);
    area= length*breath;
    printf("circumfrence:%lf",paremeter);
    printf("area:%lf",area);
double a;
double b;
double c;
double d;
printf("(a+b)^2\n");
printf("what is the value of a");
scanf("%lf",&a);
printf("what is the value of b");
scanf("%lf",&b);
c=(a*a+b*b+2*a*b);
printf("answer:- %lf",c);*/
char grade;
printf("plz enter your grade");
scanf("%c",&grade);
switch(grade){
case 'A':
printf("perfect");
break;
case 'B':
printf("you did well");
break;
case 'C':
printf("good");
break;
case 'D':
printf("improve");
break;
case 'F':
printf("fail");
break;
default:
printf("write valid grade");


}
    return 0;
} 