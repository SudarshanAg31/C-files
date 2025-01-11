      #include<stdio.h>
int main(){
   int num;
   int count=0;
   int halfcount=0;
   int x=0;
   for(int i=1;i<=11;i++){
    scanf("%d",&num);
    if(num>=100){
        count++;
        x=num+x;
    }
    else if(num>=50&&num<=99){
        halfcount++;
        x=num+x;
    }
    else{
        x=num+x;
    }
   }
    printf("total run: %d\n",x);
    printf("total century: %d\n",count);
    printf("total half century: %d\n",halfcount);

    return 0;
}