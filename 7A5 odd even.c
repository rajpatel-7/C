#include<stdio.h>
void main()
{
	int a;
	printf("Enter number:");
	scanf("%d",&a);
	
	(a%2==0) ? printf("%d is Even",a) : printf("%d is odd",a);
}
