#include <stdio.h>

int main()
{
    int Piels,Coors,Bud,Iron_City,amt,id;

    printf("Enter the intitial for Piels: ");
    scanf("%d",&Piels);
    printf("Enter the intitial for Coors: ");
    scanf("%d",&Coors);
    printf("Enter the intitial for Bud: ");
    scanf("%d",&Bud);
    printf("Enter the intitial for Iron_City: ");
    scanf("%d",&Iron_City);

    while(1)
    {
        printf("Enter id: ");
        scanf("%d",&id);

        if(id<1 ||id>4)
        break;

        printf("ENter amount: ");
        scanf("%d",&amt);

        switch(id)
        {
            case 1:
            {
                if(Piels>=0)
                Piels+=amt;
                break;
            }

            case 2:
            {
                if(Coors>=0)
                Coors+=amt;
                break;
            }

            case 3:
            {
                if(Bud>=0)
                Bud+=amt;
                break;
            }

            case 4:
            {
                if(Iron_City>=0)
                Iron_City+=amt;
                break;
            }

            default:
            printf("Wrong Id.\n");
        }
    }

    printf("Final amounts are: %d,%d,%d,%d",Piels,Bud,Iron_City,Coors);
}