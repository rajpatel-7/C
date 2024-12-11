#include<stdio.h>

void main(){
    int base,power,i,sum=0,j,n,a;
    printf("Enter The Base Num: ");
    scanf("%d", &base);
    printf("Enter The Power Num: ");
    scanf("%d",&power);
    n=base;
    for(i=1;i<=power-1;i++){
        for(j=1;j<=n;j++){
            sum=sum+base;
        }
        base=sum;
        sum=0;
        }
    printf("%d",base);
}
