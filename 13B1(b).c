#include<stdio.h>
int main()
{
	int i,j,n=5,a=1;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			a=a%2;
			printf("%d ",a);
			a++;
		}
		printf("\n");
	}
	return 0;
}
