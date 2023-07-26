/*program to check whether given date is valid or not*/
#include<stdio.h>
main()
{
	int date,year,mon;
	printf("enter date..:");
	scanf("%d",&date);
	printf("\nenter month..:");
	scanf("%d",&mon);
	printf("\nenter year..:");
	scanf("%d",&year);
	printf("%d/%d/%d",date,mon,year);
	if(year>2000 && year<2023)
	{
	    if((mon==1 || mon==3 || mon==5 || mon==7 || mon==9 || mon==11) && (date>0 && date<=31))
	    {
		printf("\nvalid date");
        }
        else if((mon==4 || mon==6 || mon==8 || mon==10 || mon==12) && (date>0 && date<=30))
        {
    	printf("\nValid date");
	    }
	    else if(mon==2 && (date>0 && date<=28))
	    {
	    	printf("\nvalid date");
		}
	    else
	    {
		printf("\nNot a valid date");
	    }
    }
    else
    {
    	printf("\nnot valid date");
	}
}
