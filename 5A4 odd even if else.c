#include<stdio.h>

int main()
{
	int a;
    printf("Enter Number:");
    scanf("%d",&a);

    if(a%2==0){
    	printf("Given Number Is Even");
	}
	else
	{
		printf("Given Number Is Odd");
	}
	
	return 0;
}
