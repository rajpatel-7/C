#include<stdio.h>
void main()
{
	int n,i=1,fac=1;
	printf("Enter Num:");
	scanf("%d",&n);
	while(i<=n)
	{
		fac*=i;
		i++;
	}
	printf("%d",fac);
}
