#include <stdio.h>

struct auto_t{
    char make[20];
    char model[20];
};

struct date_t{
    double odometer_reading;
    int manufacture,purchase_date;
};

struct tank_t{
    double tank_capacity,current_fuel_level;
};

struct date_t scan_date()
{
    struct date_t d;
    printf("Enter manufacture year: ");
    scanf("%d",&d.manufacture);
    printf("Enter odometer reading: ");
    scanf("%lf",&d.odometer_reading);
    printf("Enter purchase date: ");
    scanf("%d",&d.purchase_date);
    return d;
}

struct tank_t scan_tank()
{
    struct tank_t t;
    printf("Enter tank capacity: (in gallons)");
    scanf("%lf",&t.tank_capacity);
    printf("Enter current fuel level (in gallons): ");
    scanf("%lf",&t.current_fuel_level);

    return t;
}

struct auto_t scan_auto()
{   
    struct auto_t a;
    printf("Enter make of the car: ");
    scanf("%s",&a.make);

    printf("Enter model of the car: ");
    scanf("%s",&a.model);

    return a;
}

void print_date(struct date_t d)
{
    printf("Manufature year is: %d\n",d.manufacture);
    printf("Odometer reading is: %lf\n",d.odometer_reading);
    printf("Purchase date is: %d\n",d.purchase_date);
}

void print_tank(struct tank_t t)
{
    printf("tank capacity is: %lf gallons.\n",t.tank_capacity);
    printf("current capacity is: %lf gallons.\n",t.current_fuel_level);
}

void print_auto(struct auto_t a)
{
    printf("Model is: %s\n",a.model);
    printf("Make is: %s\n",a.make);
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