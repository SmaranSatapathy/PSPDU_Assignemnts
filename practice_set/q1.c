#include <stdio.h>

int main() {
    double x1, y1, x2, y2;
    double slope, xmid, ymid, per_bisect_slope, y_intercept;

    // Input coordinates of the two points
    printf("Enter the coordinates for the first point (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the coordinates for the second point (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Compute the slope of the line segment
    slope = (y2 - y1) / (x2 - x1);

    // Compute the midpoint of the line segment
    xmid = (x1 + x2) / 2;
    ymid = (y1 + y2) / 2;

    // Compute the slope of the perpendicular bisector
    per_bisect_slope = -1 / slope;

    // Compute the y-intercept of the perpendicular bisector
    y_intercept = ymid - (per_bisect_slope * xmid);

    // Output the results
    printf("The coordinates entered were (%.2lf, %.2lf) and (%.2lf, %.2lf).\n", x1, y1, x2, y2);
    printf("The equation of the perpendicular bisector is y = %.2lfx + %.2lf\n", per_bisect_slope, y_intercept);

    return 0;
}
