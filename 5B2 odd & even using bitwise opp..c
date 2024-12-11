#include<stdio.h>
int main()
{
    int number;
    printf("enter your number:");
    scanf("%d",&number);
    if((number & 1) == 0)
    {
        printf("number is even");
    }
    else
    {
        printf("number is odd");
    }
    return 0;
}
