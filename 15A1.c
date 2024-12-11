#include<stdio.h>
void main(){
	int n,i;
	printf("Enter size of  an array: ");
	scanf("%d",&n);
	int a[n],b[n];
	
	for(i=0;i<n;i++){
		printf("Enter element of a[%d]: ",i);
		scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++){
		b[i]=a[i];
	}
	for(i=0;i<n;i++){
		printf("b[%d]=%d\n",i,b[i]);
	}
}
