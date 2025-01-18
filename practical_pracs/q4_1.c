#include <stdio.h>

void calculate(int *amt,int *fifties,int *twenties,int *tens)
{
    *fifties=*amt/50;
    *twenties=(*amt%50)/20;
    *tens=((*amt%50)%20)/10;
}

int main()
{
    int amt,number_of_fifties=0,number_of_tens=0,number_of_twenties=0;
    printf("Enter amount: ");
    scanf("%d",&amt);
    
    if(amt%10==0)
    {
        calculate(&amt,&number_of_fifties,&number_of_twenties,&number_of_tens);

        printf("Number of fifties are: %d\n",number_of_fifties);
        printf("Number of twenties are: %d\n",number_of_twenties);
        printf("Number of tens are: %d\n",number_of_tens);
    }

    else
    printf("Wrong input.");
}