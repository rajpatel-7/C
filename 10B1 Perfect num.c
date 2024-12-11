#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	printf("Enter Number: ");
	scanf("%d",&n);
	
	while(i<n)
	{
		if(n%i==0){
			sum+=i;
		}i++;
	}
	if(sum==n){
	printf("Given number %d is perfect number.",n);}
	else{
	printf("Given number %d is not perfect number.",n);}
	return 0;
}
