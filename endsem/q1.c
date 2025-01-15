#include <stdio.h>

struct auto_t{
    char make[20];
    char model[10];
    double odometer_reading;
};

struct date_t{
    int purchase_date,manufacture;
};

struct tank_t{
    double tank_capacity,curr_fuel;
};

struct auto_t scan_auto()
{
    struct auto_t a;
    printf("Enter make: ");
    scanf("%s",&a.make);
    printf("Enter model: ");
    scanf("%s",&a.model);
    printf("Enter odometer reading: ");
    scanf("%lf",&a.odometer_reading);

    return a;
}

struct date_t scan_date()
{
    struct date_t d;
    printf("Enter purchase date: ");
    scanf("%d",&d.purchase_date);
    printf("Enter manufacture: ");
    scanf("%d",&d.manufacture);

    return d;
}

struct tank_t scan_tank()
{
    struct tank_t t;
    printf("Enter tank capacity(in gallons): ");
    scanf("%lf",&t.tank_capacity);
    printf("Enter fuel level: ");
    scanf("%lf",&t.curr_fuel);

    return t;
}

void print_auto(struct auto_t a)
{
    printf("%s %s %lf ",a.make,a.model,a.odometer_reading);
}

void print_date(struct date_t d)
{
    printf("%d %d ",d.manufacture,d.purchase_date);
}

void print_tank(struct tank_t t)
{
    printf("%lf %lf",t.tank_capacity,t.curr_fuel);
}

int main()
{
    struct auto_t a=scan_auto();

    struct date_t d=scan_date();

    struct tank_t t=scan_tank();
    print_auto(a);
    print_date(d);
    print_tank(t);
}