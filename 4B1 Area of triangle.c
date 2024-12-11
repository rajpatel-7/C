#include<stdio.h>

int main()
{
	float a,h,b;
	printf("Enter Height:");
	scanf("%f", &h);

	printf("Enter Base:");
	scanf("%f", &b);
		
    a=(h*b)/2;
	
	printf("Area of triangle is %f",a);
	return 0;
}
