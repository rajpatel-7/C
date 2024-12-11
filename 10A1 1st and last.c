#include<stdio.h>
void main()
{
	int n,sum=0,rem,a;
	printf("Enter Number");
	scanf("%d",&n);
	
	rem=n%10;
	while(n!=0){
	a=n;
	n=n/10;
	}
	printf("Sum of first and last Digit=%d",a+rem);
}
