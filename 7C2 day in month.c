#include <stdio.h>

int main()
{
    int month,year,y;
    printf("Enter year number");
    scanf("%d", &year);
    
    printf("Enter month number(1-12): ");
    scanf("%d", &month);
    
    if(year%4==0)
	{
    	if(year%100==0)
		{
    		if(year%400==0)
			{
    			y=1;
			}
			else
			{
				y=0;
			}
		}
		else
		{
		y=1;
		}
	}
	else
	{
		y=0;
	}
     
    
    
    
    if(y==1)
    {
	switch(month)
    {
        case 1: 
            printf("31 days");
            break;
        case 2: 
            printf("29 days");
            break;
        case 3: 
            printf("31 days");
            break;
        case 4: 
            printf("30 days");
            break;
        case 5: 
            printf("31 days");
            break;
        case 6: 
            printf("30 days");
            break;
        case 7: 
            printf("31 days");
            break;
        case 8: 
            printf("31 days");
            break;
        case 9: 
            printf("30 days");
            break;
        case 10: 
            printf("31 days");
            break;
        case 11: 
            printf("30 days");
            break;
        case 12: 
            printf("31 days");
            break;
        default: 
            printf("Invalid input! Please enter month number between 1-12");
        }
		}
        else
		{
        	switch(month)
        {
        case 1: 
            printf("31 days");
            break;
        case 2: 
            printf("28 days");
            break;
        case 3: 
            printf("31 days");
            break;
        case 4: 
            printf("30 days");
            break;
        case 5: 
            printf("31 days");
            break;
        case 6: 
            printf("30 days");
            break;
        case 7: 
            printf("31 days");
            break;
        case 8: 
            printf("31 days");
            break;
        case 9: 
            printf("30 days");
            break;
        case 10: 
            printf("31 days");
            break;
        case 11: 
            printf("30 days");
            break;
        case 12: 
            printf("31 days");
            break;
        default: 
            printf("Invalid input! Please enter month number between 1-12");
		}

    }

    return 0;
}
