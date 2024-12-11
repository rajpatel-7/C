#include<stdio.h>
void sum(int,int);
int a,b;
void main(){
	scanf("%d %d",&a,&b);
	sum(a,b);
}
void sum(int a,int b){
	int c;
	c=a*b;
	printf("%d",c);
}
