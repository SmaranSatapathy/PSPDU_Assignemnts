#include <stdio.h>

int checker(int yr)
{
    if(yr%4==0)
    {
        if(yr%100==0)
        {
            if(yr%400==0)
            {
                return 1;
            }
            else
            return 0;
        }
        
        else return 1;    
        }
        else return 0;
}
int main()
{
    int yr,month,days=0;

    printf("Enter yr: ");
    scanf("%d",&yr);
    int leap_yr=checker(yr);

    switch(month)
    {
         case 12:
        days+=31;
        case 11:
        days+=30;
        case 10:
        days+=31;
        case 9:
        days+=30;
        case 8:
        days+=31;
        case 7:
        days+=31;
        case 6:
        days+=30;
        case 5:
        days+=31;
        case 4:
        days+=30;
        case 3:
        days+=31;
        case 2:
        {
            if(checkLeap(yr)==1)
            days+=29;
            else
            days+=28;
        }
        case 1:
        days+=31;
        break;
    }
    printf("Total days are: %d",days);
    }
