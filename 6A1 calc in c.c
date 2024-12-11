#include<stdio.h>

void main()
{
	float a,b,c;
	char ch;
	
	printf("Choose operator(+,-,*,/):");
	scanf("%c",&ch);
	
	printf("Enter 1st Number:");
	scanf("%f",&a);
	
	printf("Enter 2nd Number:");
	scanf("%f",&b);
	
	if(ch == '+')
	{
		c=a+b;
		printf("%f",c);
	}
	else if(ch == '-')
	{
		c=a-b;
		printf("%f",c);
	}
	else if(ch == '*')
	{
		c=a*b;
		printf("%f",c);
	}
	else if(ch == '/')
	{
		if(b==0)
		{
			printf("Infinite");
		}
		else
		{
		c=a/b;
		printf("%f",c);
		}
	}
}
