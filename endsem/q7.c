#include <stdio.h>

void calculate(int *amt,int *fifties,int *twenties,int *tens)
{
    *fifties=*amt/50;
    *twenties=(*amt%50)/20;
    *tens=((*amt%50)%20)/10;
}

int main()
{
    int fifties,twenties,tens,amt;
    printf("Enter amt: ");
    scanf("%d",&amt);
    calculate(&amt,&fifties,&twenties,&tens);
    printf("Ans is:  %d %d %d",fifties,twenties,tens);
}