#include <stdio.h>
#include <math.h>

int main()
{
    double purchase_price,down_payment,annual_interest_rate,payment,monthly_interest_rate,principle,total_number_of_payements;

    printf("Eneter purchase price: ");
    scanf("%lf",&purchase_price);
    printf("Enter down payment: ");
    scanf("%lf",&down_payment);
    printf("Enter rate: ");
    scanf("%lf",&annual_interest_rate);
    printf("Enter payments: ");
    scanf("%lf",&total_number_of_payements);

    monthly_interest_rate=annual_interest_rate/12/100;

    principle=purchase_price-down_payment;
    payment=(monthly_interest_rate*principle)/(1-pow(1+monthly_interest_rate,-total_number_of_payements));

    printf("Principle amount is: $ %.2lf and payment is: $ %.2lf",principle,payment);
}