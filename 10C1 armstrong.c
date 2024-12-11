#include<stdio.h>
int main()
{
	int n,count=0,a,b,rem,sum=0;
	printf("Enter Number:");
	scanf("%d",&n);
	a=n;
	b=n;
	while(n!=0){
		n=n/10;
		count++;
	}
	while(a!=0){
	rem=a%10;
	int ans=1,i=1;
	while(i<=count)
	{
		ans*=rem;
		i++;
	}
	a/=10;
	sum+=ans;
	}
	if(b==sum)
	printf("%d is armstrong number",b);
	else
	printf("%d is not armstrong number",b);
	
	return 0;
}
