#include <stdio.h>

void gotham_city()
{
    int yr;
    printf("Enter year after 1990: ");
    scanf("%d",&yr);
    if(yr>=1990)
    {
        double population=52.966+2.184*(yr-1990);
    printf("Predicted Gotham City population for %d (in thousands): %.3lf",yr,population);
    }

    else
    printf("Wrong Input.");
}

int main()
{
    gotham_city();
}