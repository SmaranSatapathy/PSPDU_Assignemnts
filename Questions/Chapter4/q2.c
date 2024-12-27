#include <stdio.h>

int main()
{
    int n,sum=0,rem;
    char digit;
    printf("Enter number: ");
    scanf("%d",&n);
    // int a=65;
    // char x=(char)a;
    // printf("%c",x);

    while(n!=0)
    {
        rem=n%10;
        digit=(char)rem;
        printf("%c\n",(char)digit);
        sum=sum+((int)digit-(int)'0');
        n/=10;
    printf("%d\n",sum);
    }

    sum%9==0?printf("Number is divisble ny 9."):printf("Number is not divisble by 9.");
}