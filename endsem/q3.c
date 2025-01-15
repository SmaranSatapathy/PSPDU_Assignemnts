#include <stdio.h>

int main()
{
    int code[12],odd_position_sum=0,even_position_sum=0,ans=0,check_digit;
    printf("Enter code: ");
    for(int i=0;i<12;i++)
    {
        scanf("%d", &code[i]);
    }

    for(int i=0;i<12;i++)
    {
        if(i%2==0)
        odd_position_sum+=code[i];

        else
        even_position_sum+=code[i];
    }

    odd_position_sum*=3;
    ans=even_position_sum+odd_position_sum;

    if(ans%10==0)
    check_digit=0;
    else
    check_digit=10-(ans%10);

    if(check_digit==code[11])
    printf("Code success.");
    else
    printf("Code fail.");
}