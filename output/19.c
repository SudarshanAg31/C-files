#include<stdio.h>
int main(){
    int amount,sgst,total ,igst,cgst,choose;
    printf("enter amount: ");
    scanf("%d",&amount);
    total=(amount*18)/100;
    printf("GST= %d\n",total);
    sgst=total/2;
    printf("sgst=%d\n",sgst);
    printf("enter 1 for IGST or enter 2 for CGST");
    scanf("%d",&choose);
    if(choose==1){
        igst=total/2;
        printf("igst= %d",igst);
    }
    else{
        cgst=total;
        printf("cgst=%d",cgst);
    }
    return 0;
}