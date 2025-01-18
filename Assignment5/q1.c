// Write a program for an automatic teller machine that dispenses money. 
// The user should enter the amount desired (a multiple of 10 dollars) and the 
// machine dispenses this amount using the least number of bills. The bills dispensed are 50s, 20s, and 10s. Write a function that determines how many of 
// each kind of bill to dispense

#include <stdio.h>

void determine(int *amt,int *fifties,int *twenties,int *tens)
{
    *fifties=*amt/50;
    *twenties=(*amt%50)/20;
    *tens=((*amt%50)%20)/10;
}

int main()
{
    int amt,number_of_fifties=0,number_of_twenties=0,number_of_tens=0;

    printf("Enter the amount (as multiple of 10): ");
    scanf("%d",&amt);
    determine(&amt,&number_of_fifties,&number_of_twenties,&number_of_tens);
    printf("Number of fifties are: %d\n",number_of_fifties);
    printf("Number of twenties are: %d\n",number_of_twenties);
    printf("Number of tens are: %d\n",number_of_tens);
}