#include<stdio.h>
int main(){
	int n,i,flag=1,b;
	printf("Enter size of an array: ");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++){
		printf("Enter element of a[%d]: ",i);
		scanf("%d",&a[i]);	
	}
	printf("Search element value: ",i);
	scanf("%d",&b);
	
	for(i=0;i<n;i++){
		if(a[i]==b){
			flag=0;
			break;
		}
	}
	if(flag==0){
		printf("Given number found in array");
	}
	else{
		printf("Given number not found in array");
	}
	return 0;
}
