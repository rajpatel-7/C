#include<stdio.h>
int main()
{
	int n,i,rem,a,b,c,sum=0,count;
	printf("Enter Number: ");
	scanf("%d",&n);
	rem=n%10;
	a=n;
	for(;n!=0;){
		b=n%10;
		sum=sum*10+b;
		n=n/10;
		count++;
	}printf("%d",rem);
	sum=sum/10;
	for(i=1;i<=count-2;i++)
	{
		c=sum%10;
		printf("%d",c);
		sum/=10;
	}
	printf("%d",b);
	return 0;
}
