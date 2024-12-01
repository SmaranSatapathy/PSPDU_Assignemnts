#include <stdio.h>
#include <string.h>

int main()
{
    int degrees,turn_degrees;
    char face_direction[10],turn_direction[10];
    printf("Enter compass heading: ");
    scanf("%d",&degrees);
    printf("Compass heading is: %d degrees.\n",degrees);

    if((degrees >=0 && degrees <=90) || (degrees>=270 && degrees<=360))
    {
        strcpy(face_direction,"North");
        printf("Direction faced is: %s\n",face_direction);

        if(degrees>=0 && degrees<=90)
        turn_degrees=degrees;
        else
        turn_degrees=360-degrees;

        printf("Degrees to turn: %d\n",turn_degrees);
    }
    else
    {
        strcpy(face_direction,"South");
        printf("Direction faced is: %s\n",face_direction);
        
        if(degrees>90 && degrees<=180)
        turn_degrees=180-degrees;
        else
        turn_degrees=degrees-180;

        printf("Degrees to turn : %d\n",turn_degrees);
    }

    if(degrees>=0 && degrees<=180)
    {
        strcpy(turn_direction,"East");
        printf("Turning Direction: %s\n",turn_direction);
    }

    else
    {
        strcpy(turn_direction,"West");
        printf("Turning Direction: %s\n",turn_direction);
    }
}