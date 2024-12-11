#include<stdio.h>
void main()
{
	char ch;
	printf("Enter Character:");
	scanf("%c",&ch);
	
	(ch>=65 && ch<=91 || ch>=97 && ch<=123) ? printf("%c is an alphabet",ch) : printf("Enter Character is not an alphabet",ch) ;
}
