#include<stdio.h>
void main()
{
	int i=1,x,y,ans=1;
	printf("Enter X:");
	scanf("%d",&x);
	
	printf("Enter y:");
	scanf("%d",&y);
	
	while(i<=y)
	{
		ans*=x;
		i++;
	}
	printf("X^Y=%d",ans);
}
