#include<stdio.h>
int main()
{
	int n,i=1;
	printf("Enter num:");
	scanf("%d",&n);
	
	do
	{
		if(i%2==1)
		{
		printf("%d,",i);
		}
		i++;
	}
	while(i<=n);
	return 0;
}
