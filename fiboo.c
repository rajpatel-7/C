#include<stdio.h>
void main()
{
	double a=0,b=1,c,i=1;
	printf("%.0lf\n%.0lf\n",a,b);
	for(i=1;i<=25;i++){
		c=a+b;
		printf("%.0lf\n",c);
		a=b;
		b=c;
	}
	
}

