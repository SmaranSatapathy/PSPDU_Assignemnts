#include <stdio.h>

int main()
{
    int odd_sum=0,ans1=0,even_sum=0,ans2=0,check_digit=-1;
    int code[12];

    for(int i=0;i<12;i++)
    {
        scanf("%d", &code[i]);
    }

    // step-1
    for(int i=0;i<11;i+=2)
    {
        odd_sum+=code[i];
    }

    ans1=odd_sum*3;

    // step-2
    for(int i=1;i<11;i+=2)
    {
        even_sum+=code[i];
    }

    ans2=ans1+even_sum;

    // STEP-3
    if(ans2%10==0)
    check_digit=0;
    else
    check_digit=10-(ans2%10);

    // step-4
    if(check_digit==code[11])
    printf("UPC is correct.");

    else
    printf("UPC is incorrect.");
}