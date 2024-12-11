#include<stdio.h>
int main(){
	int n,i,count=0;
	printf("Enter size of an array: ");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++){
		printf("Enter element of a[%d]: ",i);
		scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++){
		if(a[i]%3==0){
			count++;
		}
	}
	printf("Number of element divisible by 3 in array: %d",count);
	return 0;
}
