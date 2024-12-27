// Write a program to dispense change. The user enters the amount paid and 
// the amount due. The program determines how many dollars, quarters, 
// dimes, nickels, and pennies should be given as change. Write a function 
// with four output parameters that determines the quantity of each kind of 
// coin. 

#include <stdio.h>

void determine(int amt,int *dollars,int *quarters,int *dimes,int *nickels,int *pennies)
{
    *dollars=amt/100;
    amt=amt%100;
    *quarters=amt/25;
    amt=amt%25;
    *dimes=amt/10;
    amt=amt%10;
    *nickels=amt/5;
    amt=amt%5;
    *pennies=amt;
}

int main()
{
    int amt,dollars,nickels,pennies,dimes,quarters;

    printf("Enter amount: ");
    scanf("%d",&amt);

    determine(amt,&dollars,&quarters,&dimes,&nickels,&pennies);

    printf("Dollars: %d\n",dollars);
    printf("Quarters: %d\n",quarters);
    printf("Dimes: %d\n",dimes);
    printf("Nickels: %d\n",nickels);
    printf("Pennies: %d\n",pennies);
}