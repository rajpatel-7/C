#include<stdio.h>
int main(){
	int n,i=1,rem;
	printf("Enter Number: ");
	scanf("%d",&n);
	
	while(n!=0){
		rem=n%2;
		n/=2;
		printf("%d",rem);
		i++;
	}
}
