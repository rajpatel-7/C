#include<stdio.h>
#include<string.h>
void main(){
	char a[100]="Darshan University",ch;
	int flag=1,i;
	printf("String 1=");
	puts(a);
	printf("Enter Chracter U want to find: ");
	scanf("%c",&ch);
	for(i=0;a[i]!='\0';i++){
		if(a[i]==ch){
			flag=0;
			break;
		}
	}
	if(flag==0){
		printf("GIven Character found in string");
	}
	else{
		printf("GIven Character not found in string");
	}
}
