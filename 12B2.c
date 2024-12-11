#include<stdio.h>
void main()
{
	float n=100,i,j,sum=1,fac=1;
	for(i=1;i<=n;i++){
		fac=1;
		for(j=1;j<=i;j++){
			fac=fac*j;
		}	
		sum=sum+1/fac;
	}
	printf("%.10f",sum);
}
