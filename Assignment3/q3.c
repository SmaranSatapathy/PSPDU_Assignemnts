#include <stdio.h>

int calculate_sold(int purchased)
{
    int sold,sold_sum=0;
    for(int i=1;i<=7;i++)
    {
        printf("Enter sold amount for Week %d: ",i);
        scanf("%d",&sold);
        sold_sum+=sold;
    }
    return sold_sum;
}

int main()
{
    int piels,coors,bud,iron_city,sold;
    printf("Enter Piels: ");
    scanf("%d",&piels);
    printf("Enter Coors: ");
    scanf("%d",&coors);
    printf("Enter Bud: ");
    scanf("%d",&bud);
    printf("Enter Iron City: ");
    scanf("%d",&iron_city);


    switch(1)
    {
        case 1:
        {
            printf("Transaction Details: \n");
            sold=calculate_sold(piels);
            printf("Brand: Piels\n");
            printf("Amount purchased: %d\n",piels);
            printf("Amount sold: %d\n",-(sold));
        }

        case 2:
        {
            printf("Transaction Details: \n");
            sold=calculate_sold(coors);
            printf("Brand: Coors\n");
            printf("Amount purchased: %d\n",coors);
            printf("Amount sold: %d\n",-(sold));
        }
        case 3:
        {
            printf("Transaction Details: \n");
            sold=calculate_sold(bud);
            printf("Brand: Bud\n");
            printf("Amount purchased: %d\n",bud);
            printf("Amount sold: %d\n",-(sold));
        }
        case 4:
        {
            printf("Transaction Details: \n");
            sold=calculate_sold(iron_city);
            printf("Brand: Iron City\n");
            printf("Amount purchased: %d\n",iron_city);
            printf("Amount sold: %d\n",-(sold));
        }
    }
}