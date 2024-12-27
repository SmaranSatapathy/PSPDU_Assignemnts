// Write a program to process weekly employee time cards for all employees of 
// an organization. Each employee will have three data items: an identification 
// number, the hourly wage rate, and the number of hours worked during a given 
// week. Each employee is to be paid time and a half for all hours worked over 
// 40. A tax amount of 3.625% of gross salary will be deducted. The program output should show the employee’s number and net pay. Display the total payroll 
// and the average amount paid at the end of the run. 

#include <stdio.h>

int main()
{
    int id_number,number_of_hours,n,i;
    double hourly_wage,salary,bonus_salary=0,
    gross_salary,total_payroll=0,average_amt_paid=0,net_pay_salary=0;
    printf("Enter number of employees: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("Enter employee id number: ");
        scanf("%d",&id_number);

        printf("Enter number of works worked: ");
        scanf("%d",&number_of_hours);

        printf("Enter hourly wage: ");
        scanf("%lf",&hourly_wage);

        if(number_of_hours>40)
        bonus_salary=(number_of_hours-40)*1.5;

        salary=hourly_wage*number_of_hours+bonus_salary;

        printf("Salary to be provided: Rs.%lf\n",salary);
        gross_salary=salary-(0.03625*salary);
        printf("Gross salary received is: %lf\n",gross_salary);
        total_payroll+=salary;
        net_pay_salary+=gross_salary;
    }

    net_pay_salary/=n;
    printf("Total Payroll is: Rs. %lf\n",total_payroll);
    printf("Average payout is: Rs. %lf",net_pay_salary);
}

// OUTPUT:
// Enter number of employees: 2
// Enter employee id number: 1
// Enter number of works worked: 50
// Enter hourly wage: 10000
// Salary to be provided: Rs.500015.000000
// Gross salary received is: 481889.456250
// Enter employee id number: 2
// Enter number of works worked: 10
// Enter hourly wage: 12000
// Salary to be provided: Rs.120015.000000
// Gross salary received is: 115664.456250
// Total Payroll is: Rs. 620030.000000
// Average payout is: Rs. 298776.956250