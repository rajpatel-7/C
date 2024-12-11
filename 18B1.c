#include<stdio.h>
void fibbo(int);

void main(){
	int n;
	scanf("%d",&n);
    fibbo(n);
}
void fibbo(int n){
	double a=0,b=1,c,i;
	printf("%.0lf\n",b);
	for(i=1;i<=n;i++){
		c=a+b;
		printf("%.0lf\n",c);
		a=b;
		b=c;
	}
}
