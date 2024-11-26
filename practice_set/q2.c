#include <stdio.h>

int main() {
    int weekday_minutes, night_minutes, weekend_minutes;
    double flat_rate = 39.99;
    double additional_minute_cost = 0.40;
    double tax_rate = 0.0525;
    double pretax_bill, total_bill, taxes, average_cost_per_minute;
    int additional_minutes;

    // Prompt for input
    printf("Enter the number of weekday minutes used: ");
    scanf("%d", &weekday_minutes);
    printf("Enter the number of night minutes used: ");
    scanf("%d", &night_minutes);
    printf("Enter the number of weekend minutes used: ");
    scanf("%d", &weekend_minutes);

    // Calculate additional weekday minutes cost
    if (weekday_minutes > 600) {
        additional_minutes = weekday_minutes - 600;
    } else {
        additional_minutes = 0;
    }
    double additional_cost = additional_minutes * additional_minute_cost;

    // Calculate pretax bill
    pretax_bill = flat_rate + additional_cost;

    // Calculate average cost per minute before taxes
    int total_minutes = weekday_minutes + night_minutes + weekend_minutes;
    average_cost_per_minute = pretax_bill / total_minutes;

    // Calculate taxes
    taxes = pretax_bill * tax_rate;

    // Calculate total bill
    total_bill = pretax_bill + taxes;

    // Output the results
    printf("Weekday minutes used: %d\n", weekday_minutes);
    printf("Night minutes used: %d\n", night_minutes);
    printf("Weekend minutes used: %d\n", weekend_minutes);
    printf("Pretax bill: $%.2f\n", pretax_bill);
    printf("Average cost per minute before taxes: $%.2f\n", average_cost_per_minute);
    printf("Taxes: $%.2f\n", taxes);
    printf("Total bill: $%.2f\n", total_bill);

    return 0;
}