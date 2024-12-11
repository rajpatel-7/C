#include<stdio.h>
void main(){int n,i,j,b,temp;
	printf("Enter size of an array: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter value of arr[%d]",i);
		scanf("%d",&a[i]);
	}temp=a[0];
	for(i=0;i<n;i++){
		if(temp==a[i]){
		}
		else{
			printf("%d",i);
		}
	}
	
}

