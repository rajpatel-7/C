#include<stdio.h>

void main()
{
	int a,b;
	printf("ENTER A=");
	scanf("%d",&a);
	printf("ENTER B=");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("A=%d \nB=%d ",a ,b);
		
}
