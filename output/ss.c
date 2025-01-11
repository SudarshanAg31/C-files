#include<stdio.h>
#include<math.h>
int main(){
    int a,b,x,c,d,z;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
// a=4 b=5,c=2
d=fmax(a,c);//a
z=fmax(a,b);//b
x=fmax(c,b);//b

printf("%d",b);
return 0;
}