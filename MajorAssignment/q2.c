#include <stdio.h>

int within_x_percent(int *ref,double data,double x)
{
    double upper_bound=*ref+((x/100)**ref);
    double lower_bound=*ref-((x/100)**ref);
    // printf("Upper bound is: %lf\n",upper_bound);
    // printf("Lower bound is: %lf\n",lower_bound);

    if(data>=lower_bound && data<=upper_bound)
    {
        if(*ref==100)
        {
            printf("Substance: Water\n");
            return 1;
        }

        else if(*ref==357)
        {
            printf("Substance: Mercury\n");
            return 1;
        }

        else if(*ref==1187)
        {
            printf("Substance: Copper\n");
            return 1;
        }

        else if(*ref==2193)
        {
            printf("Substance: Silver\n");
            return 1;
        }

        else if(*ref==2660)
        {
            printf("Substance: Gold\n");
            return 1;
        }

        else{
            printf("Substance Unknown.\n");
            return 0;
        }
        
    }
    else {
        printf("Substance Unknown\n");
        return 0;
    }
    
}

int main()
{
    int boiling_point,ans;
    double ranges=0,x;

    printf("Enter refernce boiling point:");
    scanf("%d",&boiling_point);

    printf("Enter observed boiling point: ");
    scanf("%lf",&ranges);

    printf("Enter value of x: ");
    scanf("%lf",&x);

    ans=within_x_percent(&boiling_point,ranges,x);
    
    if(ans)
    printf("True");

    else 
    printf("False");
}