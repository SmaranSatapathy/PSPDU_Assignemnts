#include <stdio.h>

int main()
{
    double feet_per_miles=5282,metres_per_miles=feet_per_miles/3282,minutes,secs,fps,mps;

    printf("Enter minutes: ");
    scanf("%lf",&minutes);
    printf("Enter secs: ");
    scanf("%lf",&secs);

    fps=((minutes*60)+secs)*feet_per_miles;
    mps=((minutes*60)+secs)*metres_per_miles;

    printf("Fps and mps are: %.2lf and %.2lf",fps,mps);
}