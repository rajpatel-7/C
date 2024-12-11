#include<stdio.h>

int main()
{
	float r,g,b,w,c,m,y,k,a,f,e;
	printf("Enter R,G,B:")
	scanf("%f %f %f",&r,&g,&b);
	if(r<=255 && g<=255 && b<=255)
	{
	a=r/255;
	f=g/255;
	e=b/255;
   	if(a>f && a>e){
    	w=a;
	}
	else if(f>e)
	{
		w=f;
	}
	else
	{
		w=e;
	}
	c=(w-a)/w;
	m=(w-f)/w;
	y=(w-e)/w;
	k=1-w;
	printf("C=%.3f\nM=%.3f\nY=%.3f\nK=%.3f\n",c,m,y,k);
	}
	
	else
	printf("Invalid Input");
	return 0;
}
