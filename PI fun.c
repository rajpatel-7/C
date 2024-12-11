#include<stdio.h>
float pi(){float a;
	a=3.14159265;
	return a;
}
void main(){
	float r,c;
	scanf("%f",&r);
	c=pi()*r*r;
	printf("%f",c);
}

