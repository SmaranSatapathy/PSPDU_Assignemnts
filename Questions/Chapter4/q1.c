//1. An integer n is divisible by 9 if the sum of its digits is divisible by 9. 
//Develop a program to display each digit, starting with the rightmost digit. 
// Your program should also determine whether or not the number is divisible by 9.
//Test it on the following numbers: 
// n = 154368 
// n = 621594 
// n = 123456 

#include <stdio.h>

int main()
{
    int n,rem,sum=0;
    printf("Enter number: ");
    scanf("%d",&n);

    while(n!=0)
    {
        rem=n%10;
        sum+=rem;
        n/=10;
    }

    (sum%9==0)?printf("Number is divisble by 9."):printf("Number is not divisble by 9.");
}