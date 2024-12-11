#include<stdio.h>

void main()
{
	int a,b;
	
	printf("Start From Zero");
	printf("Enter Number:");
	scanf("%d",&a);
	
	b=a%7;
	
	switch(b)
	{
		case 0:
			printf("Sunday");
			break;
			
		case 1:
			printf("Monday");
			break;
			
		case 2:
			printf("Tuesday");
			break;
			
		case 3:
			printf("Wednesday");
			break;
			
		case 4:
			printf("Thursday");
			break;
			
		case 5:
			printf("Friday");
			break;
			
		case 6:
			printf("Saturday");
			break;
			
		
	}
}
