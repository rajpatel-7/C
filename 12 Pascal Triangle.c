 #include<stdio.h>
 void main(){
 	int i,j,c,n ;
 	printf("(Start from 0)Enter a number: ");
 	scanf("%d",&n);
 	for(i=0;i<=n;i++){
 		for(j=0;j<=n-i;j++){
 			printf(" ");
		}
		for(j=0;j<=i;j++){
			if(i==0 || j==0)
			c=1;
			else
			c=(c*(i-j+1))/j;
			
			printf("%d ",c);
		}
		 printf("\n");
	 }
 }
