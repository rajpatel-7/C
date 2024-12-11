#include<stdio.h>
void main()
{
	int sum=0,i=1,n;
	printf("Enter Num:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		sum+=i;
		i++;
		if(i<=n)
		{
		sum-=i;
		i++;
		}
	}
	printf("%d\n",sum);
}
