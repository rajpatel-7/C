#include<stdio.h>
#include<string.h>
int main(){
	char a[100],i,b;
	printf("Enter string value: ");
	gets(a);
	
	for(i=0;a[i]!=0;i++){
		printf("%c",a[i]);
	}printf("\n");
	b=strlen(a);
	printf("Length of string: %d",b);
}
