#include <stdio.h>

int main()
{
    int arr[12];
    int even_sum=0,odd_sum=0,sum=0,check_digit=0,last_digit=0;
    // int len=sizeof(arr);
    // int len1=sizeof(arr[0]);
    // printf("%d\n",len);
    // printf("%d\n",len1);

    for(int i=0;i<12;i++)
    {
        printf("Enter number: ");
        scanf(" %d",&arr[i]);
    }

    for(int i=0;i<11;i++)
    {
        if(i%2==0)
        odd_sum+=arr[i];

        else
        even_sum+=arr[i];
    }
    
    sum=odd_sum*3+even_sum;
    printf("Sum of odd numbers: %d\n",odd_sum);
    printf("Sum of even numbers: %d\n",even_sum);

    last_digit=sum%10;

    if(last_digit==0)
    check_digit=0;

    else
    check_digit=10-last_digit;

    printf("Last digit: %d\n",last_digit);
    printf("Check digit: %d\n",check_digit);

    if(check_digit==arr[11])
    printf("Validated!!");

    else
    printf("Error in barcode.");

}