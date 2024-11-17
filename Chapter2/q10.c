#include <stdio.h>

int main()
{
    double x1,y1,x2,y2,m,per_bisector_slope,xmid,ymid,c;
    printf("Enter x of Point 1: ");
    scanf("%lf",&x1);
    printf("Enter y of Point 1: ");
    scanf("%lf",&y1);
    printf("Enter x of Point 2: ");
    scanf("%lf",&x2);
    printf("Enter y of Point 2: ");
    scanf("%lf",&y2);

    m=(y2-y1)/(x2-x1);
    printf("Slope of the line segment is: %lf\n",m);

    xmid=(x1+x2)/2;
    ymid=(y1+y2)/2;

    printf("Midpoint of the line segment: (%lf,%lf)\n",xmid,ymid);

    per_bisector_slope=-(1/m);
    printf("Slope of the perpendicular bisector is: %lf\n",per_bisector_slope);

    c=ymid-per_bisector_slope*xmid;
    printf("Equation is: y=%.2lfx +%.2lf",per_bisector_slope,c);
}