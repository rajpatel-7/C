#include<stdio.h>
void print(int a[]);

void main(){
	int a[5];
	int i;
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	print(a);
}
void print(int a[]){
	int i;
	for(i=0;i<5;i++){
		printf("%d\n",a[i]);
	}
}
