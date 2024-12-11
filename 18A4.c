#include<stdio.h>
void max(float,float,float);

void main(){
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	max(a,b,c);
	
}
void max(float a,float b,float c){
	if(a>b && a>c){
		printf("%.2f\n",a);
	}
	else if(b>c){
		printf("%.2f\n",b);
	}
	else{
		printf("%.2f\n",c);
	}
}

