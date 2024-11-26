#include <stdio.h>

int main()
{
    int n=0,id_number,hourly_wage,hours,check=1;
    double total_wages,net_wages,avg_amt=0,total_payroll=0;
    printf("%d",check);
    
    while(check)
    {
        n++;
        printf("Enter id number: ");
        scanf("%d",&id_number);
        printf("Enter wages receives per hour: ");
        scanf("%d",&hourly_wage);
        printf("Enter hours: ");
        scanf("%d",&hours);

        printf("Id Number is: %d\t",id_number);
        printf("Hourly wages is: Rs.%d\t",hourly_wage);
        printf("Hours is: %d hr.\t",hours);
        if(hours<=40)
            total_wages=hourly_wage*hours;
        else
        total_wages=hourly_wage*hours+(hours-40)*(hourly_wage/2);
        total_payroll+=total_wages;

        printf("Payment is: %lf\n",total_wages);

        net_wages=total_wages-((3.625*total_wages)/100);
        avg_amt+=net_wages;
        printf("Net wages is: Rs.%lf \n",net_wages);

        printf("Want to enter more details? ");
        scanf("%d",&check);
    }

    printf("Total payroll is: Rs.%lf\n",total_payroll);
    printf("Average amount paid is: Rs.%lf",(avg_amt/n));
}