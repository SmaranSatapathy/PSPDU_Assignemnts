#include <stdio.h>
#include <math.h>


void get_rate_drop_factor(double *ans1)
{
    int a,b;
    printf("Enter rate in ml/hr => ");
    scanf("%d",&a);
    printf("Enter tubing's drop factor(drops/ml)=> ");
    scanf("%d",&b);
    *ans1=round((b*a)/60.0);
}

void kg_rate_conc(double *ans)
{
    int wt,conc,rate;
    printf("Enter rate: ");
    scanf("%d",&rate);
    printf("Enter kg: ");
    scanf("%d",&wt);
    printf("Concentration in mg/ml: ");
    scanf("&d",&conc);
    *ans=round((rate/conc)*wt*1.0);
}

void get_units_conc(double *ans)
{
    int rate,conc;
    printf("Enter rate in units/hr=> ");
    scanf("%d",&rate);
    printf("Enter concentration in units/ml=> ");
    scanf("%d",&conc);
    *ans=round(rate/conc);
}

void fig_ml_hr(double *ans)
{
    int hrs;
    printf("Enter hours: ");
    scanf("%d",&hrs);
    *ans=round(1000.0/hrs);
}

void get_problem()
{
    printf("Enter the number of the problem you wish to solve.\n");
    printf("GIVEN A MEDICAL ORDER IN \t\tCALCULATE RATE IN\n");

    printf("(1) ml/hr & tubing drop factor\t\t drops / min\n");
    printf("(2) 1 L for n hr\t\t ml / hr\n");
    printf("(3) mg/kg/hr & concentration in mg/ml\t\t ml / hr\n");
    printf("(4) units/hr & concentration in units/ml\t\t ml / hr\n");
    printf("(5) QUIT");

    double ans;
   
    int choice,flag=0;

   while(flag!=1)
   {
        printf("\nEnter choice: ");
        scanf("%d",&choice);


    switch(choice)
    {
        case 1:
        {
            get_rate_drop_factor(&ans);
            printf("The drop rate per minute is %0.0lf\n",ans);
            ans=0;
            break;
        }

         case 2:
        {
            fig_ml_hr(&ans);
            printf("The rate in milliliters per hour is: %0.0lf\n",ans);
            ans=0;
            break;
        }

        case 3:
        {
            kg_rate_conc(&ans);
            printf("The rate in milliliters per hour is: %0.0lf\n",ans);
            ans=0;
            break;
        }

         case 4:
        {
            get_units_conc(&ans);
            printf("The rate in milliliters per hour is: %0.0lf\n",ans);
            ans=0;
            break;
        }

        case 5:
        {
            printf("Quit");
            flag=1;
            break;
        }
    }
   }
}

int main()
{
    get_problem();
}