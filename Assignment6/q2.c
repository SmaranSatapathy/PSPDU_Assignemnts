#include <stdio.h>

struct element_t{
    int atomic_number;
    char name[10];
    char chemical_symbol[2];
    char element_class[20];
    double atomic_wt;
    int electons[7];
};

struct element_t scan_element()
{
    struct element_t e;
    printf("Enter atomic number: ");
    scanf("%d",&e.atomic_number);

    printf("Enter name: ");
    scanf("%s",&e.name);

    printf("Enter chemical symbol: ");
    scanf("%s",&e.chemical_symbol);

    printf("Enter element class: ");
    scanf("%s",&e.element_class);

    printf("Enter atomic weight: ");
    scanf("%lf",&e.atomic_wt);

    printf("Enter electrons:\n "); 
    for(int i=0;i<7;i++)
    {
        printf("Enter the electrons for %d shell:",(i+1));
        scanf("%d",&e.electons[i]);
    }

    return e;
}

void print_element(struct element_t e)
{
    printf("Atomic Number is: %d\n",e.atomic_number);
    printf("Name of the element is: %s\n",e.name);
    printf("Class of the element is: %s\n",e.element_class);
    printf("Atomic weight is: %.5lf\n",e.atomic_wt);
    printf("Arrangement of electrons are: ");
    for(int i=0;i<7;i++)
    {
        printf("%d ",e.electons[i]);
    }
}


int main()
{
    struct element_t e=scan_element();
    print_element(e);
}