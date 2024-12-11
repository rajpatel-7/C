#include<stdio.h>
void main()
{
	int n,a,sum=0,rem,l=0;
	printf("Enter Number:");
	scanf("%d",&n);
	
	a=n;
	while(n!=0){
	rem=n%10;
	sum=sum*10 + rem;
	n=n/10;
	}
	while(sum!=0){
	rem=sum%10;
	sum=sum/10;
	printf("%d\n",rem);
	}
}
	
