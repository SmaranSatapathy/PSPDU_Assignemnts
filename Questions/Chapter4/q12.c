// Assume that United States consumers put $51 billion in fast food charges on 
// their credit and debit cards in 2006, up from $33.2 billion in 2005. Based on 
// this model of the billions of fast food charges, 
// F(t) = 33.2 + 16.8t 
//  where t is years since 2005, write a program that repeatedly prompts the user to 
// enter a year after 2005 and then predicts the billions of dollars of fast food charges 
// U.S. consumers will make in that year. Define and call a function fast_food_
// billions that takes the year as its input argument and returns the prediction as its 
// result. Tell the user that entry of a year before 2005 will cause the program to stop. 

#include <stdio.h>

double fast_food_billions(int yr)
{
    return 33.2+(16.88*(yr-2005));
}
int main()
{
    int yr;
    double prediction=0;

    

    while(1)
    {
        printf("Enter year: ");
        scanf("%d",&yr);
        if(yr<2005)
        {
            printf("Wrong Input. Program stopped!!");
            break;
        }

    else 
        {
            prediction=fast_food_billions(yr);
            printf("Predicted food value is: %lf\n",prediction);
        }
    }
}

// OUTPUT:
// Enter year: 2020
// Predicted food value is: 286.400000
// Enter year: 2008
// Predicted food value is: 83.840000
// Enter year: 2001
// Wrong Input. Program stopped!!