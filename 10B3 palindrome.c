#include<stdio.h>
void main()
{
	int n,a,sum=0,rem,l=0;
	printf("Enter Number:");
	scanf("%d",&n);
	a=n;
	while(n!=0){
	rem=n%10;
	sum=sum*10 + rem;
	n=n/10;
	}
	if(sum==a)
	{
		printf("%d is palindrome number.",a);
	}
	else
	{
		printf("%d is not palindrome number",a);
	}
}
