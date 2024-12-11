#include<stdio.h>
int main()
{
	int i=100;
	while(i>=100 && i<=200){
		if(i%7==0){
			if(i%5!=0){
				printf("%d,",i);
			}
		}
		i++;
	}
	
	return 0;
}
