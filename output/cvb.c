#include<stdio.h>
#include<math.h>
int main(){
    
    float a,b,c;
    scanf("%f",&a);
    c=(a*3.14)/180;
    b=atan(c);
    printf("%f",b);
    return 0;
}