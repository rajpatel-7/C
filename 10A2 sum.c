#include<stdio.h>
void main()
{
	float n,i=1,a,sum=0,avg;
	printf("Enter Choice(how many num you want to enter): ");
	scanf("%f",&a);
	
	while(i<=a){
		printf("Enter %.0f Number: ",i);
	    scanf("%f",&n);
	    sum+=n;
		i++;
	}
	avg=sum/a;
	printf("Sum Of Number=%.2f\n",sum);
	printf("avg Of Number=%.2f",avg);
}
