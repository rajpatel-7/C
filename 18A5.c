#include<stdio.h>
void swap(int,int);

void main(){
	int a,b;
	printf("A=");
	scanf("%d",&a);
	printf("B=");
	scanf("%d",&b);
	swap(a,b);
}
void swap(int a,int b){
	int c;
	c=a;
	a=b;
	b=c;
	printf("A=%d\nB=%d",a,b);
}
