#include <stdio.h>

double fast_food_billions()
{
    int yr;
    double revenue=0;
    printf("Enter year: ");
    scanf("%d",&yr);

    if(yr>=2005)
    {
        

        revenue=33.2+(17.8*(yr-2005));
        printf("Year is: %d\n",yr);
        return revenue;
    }
    return revenue;
    
}

int main()
{
    while(1)
    {
        double ans=fast_food_billions();
        if(ans==0)
        {
            printf("Wrong input.\n");
            break;
        }
        else
        printf("Revenue is: $ %lf dollars\n",ans);

    }
}