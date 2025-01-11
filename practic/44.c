#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%s",a);
        int x=strlen(a);
        if(x>10){
            printf("%c%d%c\n",a[0],x,a[x-1]);
        }
    else{
        printf("%s\n",a);
    }
    }
    return 0;
}
