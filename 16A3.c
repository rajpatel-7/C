#include<stdio.h>
int main(){
	int n,i,j,m,pos=0,neg=0,zero=0;
	printf("Enter number of student: ");
	scanf("%d",&m);
	printf("Enter Number of subject: ");
	scanf("%d",&n);
	int a[m][n+1];
	
	for(i=0;i<m;i++){
		for(j=0;j<1;j++){
		printf("Enter Roll no.: ");
		scanf("%d",&a[i][j]);	
		}
		for(j=1;j<n+1;j++){
		printf("Enter Mark %d subject: ",j);
		scanf("%d",&a[i][j]);	
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<1;j++){
		printf("Roll no=%d ",a[i][j]);	
		}
		for(j=1;j<n+1;j++){
		printf("subject%d=%d ",j,a[i][j]);	
		}printf("\n");
	}
	
	return 0;
}
