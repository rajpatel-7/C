#include<stdio.h>

void main()
{
	int days,y,w,d;
	printf("Enter Days:");
	scanf("%d",&days);
	y=days/365;
	w=(days-(365*y))/7;
	d=((days-(365*y)-(w*7)));
	printf("Year=%d \nWeek=%d \nDay=%d",y ,w ,d);
}
