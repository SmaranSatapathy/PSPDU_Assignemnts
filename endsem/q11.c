#include <stdio.h>
#include <string.h>

int main()
{
    int degrees,turn_degree;
    char direction_faced[5];
    char direction_turn[5];

    printf("Enter degrees: ");
    scanf("%d",&degrees);

    if(degrees>360 ||degrees<0)
    printf("Wrong degrees");

    else if(degrees<=90)
    {
        turn_degree=degrees;
        strcpy(direction_faced,"NORTH");
        strcpy(direction_turn,"EAST");
    }

    else if(degrees<=180)
    {
        turn_degree=180-degrees;
        strcpy(direction_faced,"SOUTH");
        strcpy(direction_turn,"EAST");
    }

    else if(degrees<=270)
    {
        turn_degree=degrees-180;
        strcpy(direction_faced,"SOUTH");
        strcpy(direction_turn,"WEST");
    }

    else
    {
        turn_degree=360-degrees;
        strcpy(direction_faced,"NORTH");
        strcpy(direction_turn,"WEST");
    }

    printf("Degrees to turn %d\n",turn_degree);
    printf("Direction faced: %s\n",direction_faced);
    printf("Direction turned: %s",direction_turn);
}