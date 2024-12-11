#include<stdio.h>

int main()
{
	float f,c;
	printf("Farenheit:");
	scanf("%f",&f);
		
    c=(((f-32)*5)/9);
	
	printf("Celcius=%f",c);
	return 0;
}
