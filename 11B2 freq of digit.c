#include<stdio.h>
int main()
{
	int n,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,rem;
	printf("Enter Number: ");
	scanf("%d",&n);
	
	for(;n!=0;){
		rem=n%10;
		if(rem==1)
		{a++;}
		else if(rem==2)
		{b++;}
		else if(rem==3)
		{c++;}
		else if(rem==4)
		{d++;}
		else if(rem==5)
		{e++;}
		else if(rem==6)
		{f++;}
		else if(rem==7)
		{g++;}
		else if(rem==8)
		{h++;}
		else if(rem==9)
		{i++;}
		else if(rem==0)
		{j++;}
		n=n/10;
	}printf("0=%d\n1=%d\n2=%d\n3=%d\n4=%d\n5=%d\n6=%d\n7=%d\n8=%d\n9=%d\n",j,a,b,c,d,e,f,g,h,i);
	return 0;
}
