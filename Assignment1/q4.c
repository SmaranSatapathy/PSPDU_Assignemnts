#include <stdio.h>
#include <math.h>

#define saved 500

int main()
{
    double purchase_price,down_payment,rate,number_of_payments,principle,payment;
    printf("Enter purchase amount: ");
    scanf("%lf",&purchase_price);
    printf("Purchase amount is: $ %lf\n",purchase_price);

    printf("Enter down payment: ");
    scanf("%lf",&down_payment);
    printf("Down payment is: $ %lf\n",down_payment);

    printf("Enter rate: ");
    scanf("%lf",&rate);
    rate=rate/12/100;
    printf("Rate is: %lf% \n",rate);

    printf("Enter number of payments: ");
    scanf("%lf",&number_of_payments);
    printf("Installation is: $ %lf\n",number_of_payments);

    principle=purchase_price-down_payment;
    printf("Principle is: $ %lf\n",principle);

    payment=(principle*rate)/(1-pow((1+rate),-number_of_payments));
    printf("Payment to be paid is: $ %lf",payment);
    return 0;
}