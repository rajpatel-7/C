#include<stdio.h>
#include<stdlib.h>
void main()
{
	char a[5]={'1','2','3'};
	int i=0,sum=0,b;
	float c;
//	while(a[i]!='\0'){
//		sum=sum*10+a[i]-48;
//		i++;
//	}											\\logic of str to int
//	printf("%d\n",sum+1);
	//method 2
	b=atoi(a);
	c=atof(a);
	printf("%d\n",b);
	printf("%f",c);
	
}
