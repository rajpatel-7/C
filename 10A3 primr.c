#include<stdio.h>
int main()
{
	int n,i=1,count=0;
	printf("Enter Number: ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		if(n%i==0){
			count++;
		}i++;
	}
	if(count==2){
		printf("Given number is prime.");
	}
	else{
		printf("Given number is not prime.");
	}
	return 0;
}
