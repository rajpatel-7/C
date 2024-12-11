#include<stdio.h>
int main()
{
	int a;
	printf("Enter Integar:");
	scanf("%d",&a);
	if((a%10)%2==0)
	{
		printf("Given Integar Last Digit Is Even");
	}
	else
	{
		printf("Given Integar Last Digit Is Odd");
	}
	return 0;
}
