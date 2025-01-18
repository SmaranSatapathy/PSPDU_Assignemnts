#include <stdio.h>

int check_leap()
{
    int yr;
    printf("Enter year: ");
    scanf("%d",&yr);

    if(yr%4==0)
    {
        if(yr%100==0)
        {
            if(yr%400==0)
            return 1;
        }
        else
        return 1;
    }

    else
    return 0;
}

int main()
{
    int days=0,check_ans,month;
    check_ans=check_leap();

    printf("Enter month number: ");
    scanf("%d",&month);

    switch(month)
    {
        case 12:days+=31;
        case 11:days+=30;
        case 10:days+=31;
        case 9:days+=30;
        case 8:days+=31;
        case 7:days+=31;
        case 6:days+=30;
        case 5:days+=31;
        case 4:days+=30;
        case 3:days+=31;
        case 2:
        {
            if(check_ans)
            days+=29;
            else
            days+=28;
        }
        case 1: days+=31; break;
        default: printf("Wrong input.");
    }

    printf("Total days are: %d",days);
}