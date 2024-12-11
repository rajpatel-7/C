#include<stdio.h>

int main()
{
	float si,p,roi,t;
	printf("Enter Principal:");
	scanf("%f", &p);

	printf("Enter ROI:");
	scanf("%f", &roi);
	
	printf("Enter Time:");
	scanf("%f", &t);
		
    si=(p*roi*t)/100;
	
	printf("%f",si);
	return 0;
}
