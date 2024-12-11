#include<stdio.h>
void max(int,int),min(int,int);
int a,b;
void main(){
	scanf("%d %d",&a,&b);
	max(a,b);
	min(a,b);
}
void max(int a,int b){
	if(a>b){
		printf("%d\n",a);
	}
	else{
		printf("%d\n",b);
	}
}
void min(int a,int b){
	if(a<b){
		printf("%d\n",a);
	}
	else{
		printf("%d\n",b);
	}
}
