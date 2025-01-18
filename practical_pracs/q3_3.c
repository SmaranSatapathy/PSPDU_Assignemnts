#include <stdio.h>

int main()
{
    int piels,coors,bud,iron_city,brand_id,amt;

    printf("Enter initial inventory for Piels: ");
    scanf("%d",&piels);

    printf("Enter initial inventory for Coors: ");
    scanf("%d",&coors);

    printf("Enter initial inventory for Bud: ");
    scanf("%d",&bud);

    printf("Enter initial inventory for Iron City: ");
    scanf("%d",&iron_city);

    while(1)
    {
        printf("Enter brand id: ");
        scanf("%d",&brand_id);

        if(brand_id>4 || brand_id<1)
        break;

        printf("Enter amount: (+ for purchase, - for sale): ");
        scanf("%d",&amt);

        if(brand_id==1)
        {
            if(piels<0)
            continue;
            else
            piels+=amt;
        }

        else if(brand_id==2)
        {
            if(coors<0)
            continue;
            else
            coors+=amt;
        }

        else if(brand_id==3)
        {
            if(bud<0)
            continue;
            else
            bud+=amt;
        }

        else if(brand_id==4)
        {
            if(iron_city<0)
            continue;
            else
            iron_city+=amt;
        }
    }

    printf("Final inventory for Piels: %d\n",piels);
    printf("Final inventory for Coors: %d\n",coors);
    printf("Final inventory for Bud: %d\n",bud);
    printf("Final inventory for Iron City: %d\n",iron_city);
}