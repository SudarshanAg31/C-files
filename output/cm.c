#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
 printf("\n\n\n\n\n\n");//a=6 b=2
    a=a+b;
    printf("%d\n",a);//8
    a=a-b;//(a+b)-b=b  a=b  6=6 but store in a
    b=a-b;//we store in b because of multip.
    printf("%d\n",b);
    a=a*b;
    printf("%d\n",a);
    a=a/b;
    printf("%d\n",a);
    a=a%b;
    printf("%d\n",a);

return 0;
}