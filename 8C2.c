#include<stdio.h>
int main()
{
	int i=1,n,a,sum=0;
	printf("enter num:");
	scanf("%d",&n);
	while(i<=n){
		a=i*i;
		sum=sum+a;
		i++;
	}
	printf("%d",sum);
	return 0;
}
