#include<stdio.h>
int main()
{
	int a,b,n;
	printf("Enter 2 number:");
	scanf("%d %d",&a,&b);
	n=a^b;
    if(n==0)
	printf("Enter num is equal");
	else
	printf("Enter num is not equal");
	return 0;
}
