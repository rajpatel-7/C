#include<stdio.h>
void main()
{
	int i=1,x,y,ans=1;
	printf("Enter X:");
	scanf("%d",&x);
	
	printf("Enter y:");
	scanf("%d",&y);
	
	for(i=1;i<=y;i++){
		ans*=x;
	}printf("X^Y=%d",ans);
}
