#include<stdio.h>
int main(){
  float p1,p2,p3,a;
  float pb1=0.0,pb2=0.0,pb3=0.0;
  scanf("%f",&p1);
  scanf("%f",&p2);
  scanf("%f",&p3);
  scanf("%f",&a);
  if(a>=p1){
    pb1=1.0/3.0;
  }
  if(a>=p2){
    pb2=1.0/3.0;
  }
  if(a>=p3){
    pb3=1.0/3.0;
  }
  if(a<pb1&&a<pb2&&a<pb3){
    pb1=0.000;
    pb2=0.000;
    pb3=0.000;
  }
printf("%.3f\n",pb1); 
printf("%.3f\n",pb2);
printf("%.3f\n",pb3);
}