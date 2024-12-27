#include <stdio.h>
#include <string.h>

struct struct1{
    int roll;
    char name[30];
};

int main()
{
    // struct struct1 s={45,"Smaran"};
    struct struct1 s;
    strcpy(s.name,"Lonewolf");
    s.roll=45;
    printf("%d\n",s.roll);
    printf("%s",s.name);
}