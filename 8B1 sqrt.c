#include<stdio.h>
#include<math.h>
int main()
{
	double n,i=0;
	while(i<=9)
	{
		n=sqrt(i);
		printf("%.2lf=%.2lf\n",i,n);
		i++;
	}
	
	
	return 0;
}
