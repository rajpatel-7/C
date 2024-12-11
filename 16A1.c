#include<stdio.h>
int main(){
	int n,i,j,m,count=0;
	printf("Enter size of rows: ");
	scanf("%d",&m);
	printf("Enter size of columns: ");
	scanf("%d",&n);
	int a[m][n];
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
		printf("Enter element of a[%d][%d]: ",i,j);
		scanf("%d",&a[i][j]);	
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
		printf("%d\t",a[i][j]);	
		}printf("\n");
	}
	return 0;
}
