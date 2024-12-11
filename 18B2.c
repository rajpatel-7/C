#include<stdio.h>
void prime(int),armstrong(int),perfect(int);
int flag;
void main(){
	int n;
	scanf("%d",&n);
    prime(n);
    armstrong(n);
    perfect(n);
    if(flag==1)
    printf("Given number is Prime Number");
    else if(flag==2)
    printf("Given number is Armstrong Number");
    else if(flag==3)
    printf("Given number is Perfect Number");
    else
    printf("Given number is not a prime,armstrong or perfect Number");
    
}
void prime(int n){
	int i;
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			flag=0;
			return;
		}
	}flag=1;
}
void armstrong(int n){
	int count=0,a,b,rem,sum=0;
	a=n;
	b=n;
	while(n!=0){
		n=n/10;
		count++;
	}
	while(a!=0){
	rem=a%10;
	int ans=1,i=1;
	while(i<=count)
	{
		ans*=rem;
		i++;
	}
	a/=10;
	sum+=ans;
	}
	if(b==sum){
	flag=2;
	}
}
void perfect(int n){
	int i=1,sum=0;
	while(i<n)
	{
		if(n%i==0){
			sum+=i;
		}i++;
	}
	if(sum==n){
	flag=3;
	}
	
}
