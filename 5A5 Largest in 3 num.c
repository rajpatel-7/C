#include<stdio.h>

void main()
{
	float a,b,c;
	
    printf("Enter A:");
    scanf("%f",&a);
    
    printf("Enter B:");
    scanf("%f",&b);
    
    printf("Enter C:");
    scanf("%f",&c);

    if(a>b && a>c){
    	printf("A is Largest");
	}
	else if(b>c)
	{
		printf("B is Largest");
	}
	else
	{
		printf("C is Largest");
	}
}
