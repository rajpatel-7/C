#include<stdio.h>
int main()
{
	int n,odd=0,even=0,j=1;
	printf("Enter 10 Number\n");
	while(j<=10){
	printf("Enter %d num:",j);
	scanf("%d",&n);
	
	if(n%2==0)
	even+=1;
	else
	odd+=1;
	j++;
	}
	printf("Odd=%d\n",odd);
	printf("Even=%d",even);
	return 0;
}
