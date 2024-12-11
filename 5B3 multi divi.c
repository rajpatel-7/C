#include<stdio.h>
int main()
{
	int n,a,b;
	printf("Enter Number:");
	scanf("%d",&n);
	a=n<<1;
	b=n>>1;
	printf("Multiplication:%d\nDivision:%d",a,b);
	return 0;
}
