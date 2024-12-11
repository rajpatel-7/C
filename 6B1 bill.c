#include<stdio.h>
void main()
{
	float u,b,tb;
	printf("Enter Unit:");
	scanf("%f",&u);
	
	if(u<=50)
	{
		b=u*0.5;
	}
	else if(u<=150)
	{
		b=(50*0.5)+((u-50)*.75);
	}
	else if(u<=250)
	{
		b=(50*0.5)+(100*.75)+((u-150)*1.2);
	}
	else
	{
		b=(50*0.5)+(100*.75)+((100)*1.2)+((u-250)*1.5);
	}
	
	tb=b+(b*.2);
	
	printf("Total Bill=%f",tb);
	
}
