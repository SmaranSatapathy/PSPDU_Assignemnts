#include <stdio.h>

struct auto_t{
    char make[20];
    char model[20];
};

struct date_t{
    double odometer_reading;
    int manufacyure_yr,purchase_date;  
};

struct tank_t{
    double tank_capacity,curr_fuel_level;
};

struct auto_t scan_auto()
{
    struct auto_t a;
    printf("Enter the make of car: ");
    scanf("%s",&a.make);
    printf("Enter model of car: ");
    scanf("%s",&a.model);
    return a;
}

struct date_t scan_date()
{
    struct date_t d;
    printf("Enter odometer reading: ");
    scanf("%lf",&d.odometer_reading);
    printf("Enter manufacture year: ");
    scanf("%d",&d.manufacyure_yr);
    printf("Enter purchase date: ");
    scanf("%d",&d.purchase_date);

    return d;
}

struct tank_t scan_tank()
{
    struct tank_t t;
    printf("Enter tank capacity (in gallons): ");
    scanf("%lf",&t.tank_capacity);

    printf("Enter current fuel level: (in gallons)");
    scanf("%lf",&t.curr_fuel_level);
    return t;
}

void print_auto(struct auto_t a)
{
    printf("Make of the car is: %s\n",a.make);
    printf("Model of the car is: %s\n",a.model);
}

void print_date(struct date_t t)
{
    printf("Odometer reading is: %lf\n",t.odometer_reading);
    printf("Maufacture year is: %d\n",t.manufacyure_yr);
    printf("Purchase date is: %d",t.purchase_date);
}

void print_tank(struct tank_t t)
{
    printf("Tank capacity is: %lf gallons\n",t.tank_capacity);
    printf("Current tank capacity is: %lf gallons.\n",t.curr_fuel_level);
}

int main()
{
    struct auto_t a=scan_auto();
    print_auto(a);

    struct date_t d=scan_date();
    print_date(d);

    struct tank_t t=scan_tank();
    print_tank(t);
}