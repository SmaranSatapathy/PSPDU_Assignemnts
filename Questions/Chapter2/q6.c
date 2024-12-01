#include <stdio.h>

int main()
{
    char grade;
    double min_avg,current_avg,percent,ans;

    printf("Enter grade: ");
    scanf("%c",&grade);
    printf("Enter minimum average marks: ");
    scanf("%lf",&min_avg);
    printf("Enter current grade: ");
    scanf("%lf",&current_avg);
    printf("Enter percent: ");
    scanf("%lf",&percent);

    ans=(min_avg-(current_avg*(1-percent/100)))/(percent/100);
    printf("Ans is: %lf",ans);
}