#include <stdio.h>
#define rate 2   //2 feet per sec.
int main(){
    int yard_length,yard_breadth,house_length,house_breadth,time;

    printf("enter yard length: ");
    scanf("%d",&yard_length);
    printf("enter yard breadth: ");
    scanf("%d",&yard_breadth);
    printf("enter house length: ");
    scanf("%d",&house_length);
    printf("enter house_breadth: ");
    scanf("%d",&house_breadth);

    time=(((yard_length*yard_breadth)-(house_length*house_breadth)))/rate;
    printf("Time to cut: %d secs.",time);
}