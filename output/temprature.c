#include <stdio.h>
#include <ctype.h>
int main(){
float temp;
char unit;
printf("enter temp in C and K");
scanf("%c",&unit);
unit = toupper(unit);
if(unit == 'C'){
    printf("temp in celcius");
    scanf("%f",&temp);
    temp = 273.15+temp;
    printf("temp in kelvin%.1f",temp);
}
else if (unit=='K'){
    printf("temp in kelvin");
    scanf("%f",&temp);
    temp = temp-273.15;
    printf("temp in celcius %.1f",temp);
}
else{
    printf("%c write valid unit",unit);
}
    return 0;
}