#include<stdio.h>
void print();
int a[5];
void main(){
	int i;
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	print();
}
void print(){
	int i;
	for(i=0;i<5;i++){
		printf("%d\n",a[i]);
	}
}
