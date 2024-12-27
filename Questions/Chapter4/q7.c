// rite a program to process a collection of daily high temperatures. Your 
// program should count and print the number of hot days (high temperature 85 or higher), the number of pleasant days (high temperature 60–84), 
// and the number of cold days (high temperatures less than 60). It should 
// also display the category of each temperature. Test your program on the 
// following data: 
// 55 62 68 74 59 45 41 58 60 67 65 78 82 88 91 
// 92 90 93 87 80 78 79 72 68 61 59 
//  b. Modify your program to display the average temperature (a real number) 
// at the end of the run. 

#include <stdio.h>

int main()
{
    int size,sum=0,temp,hot_day_count=0,pleasant_days_count=0,cold_days_count=0;
    double avg;

    printf("Enter size of numbers to be enetred: ");
    scanf("%d",&size);

    for(int i=1;i<=size;i++)
    {
        printf("Enter number: ");
        scanf("%d",&temp);

        sum+=temp;

        if(temp>=85)
        {
            printf("Hot Day.\n");
            hot_day_count++;
        }

        else if(temp>=60 && temp<=84)
        {
            printf("Pleasant Day.\n");
            pleasant_days_count++;
        }

        else
        {
            printf("Cold days.\n");
            cold_days_count++;
        }
    }

    printf("Sum is: %d\n",sum);
    avg=sum/size;
    printf("Average is: %lf\n",avg);
}

// OUTPUT:
/*
Enter size of numbers to be enetred: 5
Enter number: 45
Cold days.
Enter number: 90
Hot Day.
Enter number: 97
Hot Day.
Enter number: 15
Cold days.
Enter number: 68
Pleasant Day.
Sum is: 315
Average is: 63.000000
*/