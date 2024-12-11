#include<stdio.h>
int main()
{
	int a,b,i=1;
	printf("Enter 1st num:");
	scanf("%d",&a);
	printf("Enter 2nd num:");
	scanf("%d",&b);
	while(i<a){
		i++;
	}
	while((i>=a && i<=b) || (i<=a && i>=b))
	{
		if(i%2==0)
		{
		printf("%d,",i);
		}
		i++;
	}
	return 0;
}
