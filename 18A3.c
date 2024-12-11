#include<stdio.h>
void si(int,int,int);
int tp,roi,amount;
void main(){
	printf("Enter time period,roi,amount: ");
	scanf("%d %d %d",&tp,&roi,&amount);
	si(tp,roi,amount);
}
void si(int tp,int roi,int amount){
	int c;
	c=(tp*roi*amount)/100;
	printf("Simple interest=%d",c);
}
