#include <stdio.h>
#include <limits.h>
#include <math.h>

int max(int a,int b)
{
    return a>b?a:b;
}

int min(int a,int b)
{
    return a<b?a:b;
}

int main()
{
    int n,x,maxValue=INT_MIN,minValue=INT_MAX;
    double sum=0,square_sums=0,std_dev=0,avg=0;

    printf("Enter size: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("Enter number: ");
        scanf("%d",&x);

        maxValue=max(maxValue,x);
        minValue=max(minValue,x);

        square_sums=square_sums+pow(x,2);
        sum+=x;
    }

    avg=sum/n;
    printf("average is: %lf\n",avg);
    printf("Sum of squares is: %lf\n",square_sums);

    std_dev=sqrt((square_sums/n)-avg*avg);
    printf("standard deviation is: %lf",std_dev);

}