#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter a,b,c number:");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a>b && a>c)
	{
		if(b>c)
		printf("%d is second largest",b);
		else
		printf("%d is second largest",c);
	}
	else if(b>c)
	{
		if(a>c)
		printf("%d is second largest",a);
		else
		printf("%d is second largest",c);
	}
	else
	{
		if(a>b)
		printf("%d is second largest",a);
		else
		printf("%d is second largest",b);
	}
}
