#include <stdio.h>


int main()
{
    int choice,dist;
    double emission;
    printf("Enter choice: ");
    scanf("%d",&choice);
    printf("Enter dist: ");
    scanf("%d",&dist);
    printf("Enter emission: ");
    scanf("%lf",&emission);


    switch(choice)
    {
        case 1:
        {
            printf("Carbon Monoxide\n");
            if(dist<=50000)
            {
                if(emission<=3.4)
                {
                    printf("Emission is under control.");
                }
                else
                printf("Emission is exceeded 3.4 gram/miles");
            }
            else
            {
                if(emission<=4.2)
                {
                    printf("Emission is under control.");
                }
                else
                printf("Emission is exceeded 4.2 gram/miles");
            }
            break;
        }
        case 2:
        {
            printf("Hydrocarbon\n");
            if(dist<=50000)
            {
                if(emission<=0.31)
                {
                    printf("Emission is under control.");
                }
                else
                printf("Emission is exceeded 0.31 gram/miles");
            }
            else
            {
                if(emission<=0.39)
                {
                    printf("Emission is under control.");
                }
                else
                printf("Emission is exceeded 0.39 gram/miles");
            }
            break;
        }
        case 3:
        {
            printf("Nitrogen oxide\n");
            if(dist<=50000)
            {
                if(emission<=0.4)
                {
                    printf("Emission is under control.");
                }
                else
                printf("Emission is exceeded 0.4 gram/miles");
            }
            else
            {
                if(emission<=0.5)
                {
                    printf("Emission is under control.");
                }
                else
                printf("Emission is exceeded 0.5 gram/miles");
            }
            break;
        }
        case 4:
        {
            printf("Nonmethane Hydrocarbons\n");
            if(dist<=50000)
            {
                if(emission<=0.25)
                {
                    printf("Emission is under control.");
                }
                else
                printf("Emission is exceeded 0.25 gram/miles");
            }
            else
            {
                if(emission<=0.31)
                {
                    printf("Emission is under control.");
                }
                else
                printf("Emission is exceeded 0.31 gram/miles");
            }
            break;
        }
    }
}
