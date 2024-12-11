#include<stdio.h>
void main()
{
	int a,b,c,e;
	printf("Enter 1st number:");
	scanf("%d",&a);
	
	printf("Enter 2nd number:");
	scanf("%d",&b);
	
	printf("Enter 3rd number:");
	scanf("%d",&c);
	
	if(a>b)
	e=1;
	else
	e=2;
	
	switch(e)
	{
		case 1:
		printf("%d is answer",a*c);;
			break;
			 
		case 2:
		printf("%d is answer",b*c);;
			break;
	}
	
}
