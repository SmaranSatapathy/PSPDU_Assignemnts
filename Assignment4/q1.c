#include <stdio.h>
void calculate(int bills);

int main()
{
    int bills;
    printf("Enter the amount: ");
    scanf("%d",&bills);
    calculate(bills);
}

void calculate(int bills)
{
    int x,y,z;
    x=bills/50;
    y=(bills%50)/20;
    z=((bills%50)%10)/10;
    
    printf("Answer are: %d,%d,%d",x,y,z);
}