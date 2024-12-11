#include<stdio.h>
int main()
{
	int a,s1,s2,s3,s4,s5,pr;
	printf("Enter 1st Subject Marks:");
	scanf("%d",&s1);
	
	printf("Enter 2nd Subject Marks:");
	scanf("%d",&s2);
	
	printf("Enter 3rd Subject Marks:");
	scanf("%d",&s3);
	
	printf("Enter 4th Subject Marks:");
	scanf("%d",&s4);
	
	printf("Enter 5th Subject Marks:");
	scanf("%d",&s5);
	
	a=(s1+s2+s3+s4+s5)/5;
	
	printf("%d%%\n",a);
	
	if(a<35)
	{
		printf("Fail");
	}
	else if(a<=45)
	{
		printf("Pass Class");
	}
	else if(a<=60)
	{
		printf("Second Class");
	}
	else if(a<=70)
	{
		printf("First Class");
	}
	else if(a<=100)
	{
		printf("Distinction");
	}
	else
	{
		printf("Invalid Input");
	}
	return 0;
}
