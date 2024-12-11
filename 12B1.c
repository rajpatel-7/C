#include<stdio.h>
void main()
{
	int n,i,j,ans=0;
	printf("Enter Num: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		int sum=0;
		for(j=1;j<=i;j++){
			sum=sum+j;
		}
		ans=ans+sum;
	}
	printf("%d",ans);
}
