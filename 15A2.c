#include<stdio.h>
void main(){
	int n,i,count=0;
	printf("Enter size of  an array: ");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++){
		printf("Enter element of a[%d]: ",i);
		scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++){
		if(a[i]<0){
			count++;
		}
	}
	printf("Negative number in array: %d",count);
	
}
