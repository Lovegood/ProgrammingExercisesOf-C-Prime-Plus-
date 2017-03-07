#include <stdio.h>
#define daysEveryYear 265

int main()
{
    int age,days;

    printf("Please enter your age.\n");
    scanf("%d",&age);

    days=age*daysEveryYear;

    printf("Your age is calculated by the year %d years old,and by the date is %d days.\n",age,days);

    return 0;
}
