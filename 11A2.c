#include<stdio.h>
void main()
{
	int n,i,sum=0;
	printf("Enter Number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum+=i;
	}printf("%d\n",sum);
}
