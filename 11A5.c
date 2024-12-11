#include<stdio.h>
void main()
{
	int n,i=1,fac=1;
	printf("Enter Num:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
	fac*=i;
	}printf("%d",fac);
}
