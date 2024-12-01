#include<stdio.h>
#include<limits.h>
#include<math.h>

int max(int a,int b)
{
    return (a>b?a:b);
}

int min(int a,int b)
{
    return (a<b?a:b);
}

int main()
{
	int n,i,maxValue=INT_MIN,minValue=INT_MAX,sum=0;
    double sum_squares=0,std_div;
	printf("Enter n: ");
	scanf("%d",&n);
	// int max,min;
    double avg;

    for(i=0;i<n;i++)
    {
        printf("Enter number:");
        int x;
        scanf("%d",&x);
        sum+=x;
        sum_squares+=pow(x,2);

        maxValue=max(maxValue,x);
        minValue=min(minValue,x);
    }

    avg=sum/n;

    printf("max value is: %d\n",maxValue);
    printf("min value is: %d\n",minValue);
    printf("average is: %lf\n",avg);

    // part b:
    printf("Range is from: %d to %d.\n",minValue,maxValue);
    printf("Sum of squares is: %lf.\n",sum_squares);

    std_div=sqrt((sum_squares/n)-pow(avg,2));
    printf("Standard deviation is: %lf",std_div);
	
	return 0;
}