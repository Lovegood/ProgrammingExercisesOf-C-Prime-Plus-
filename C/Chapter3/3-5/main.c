#include <stdio.h>
#include <stdlib.h>
#define SecondsEveryYear 3.156e+7

int main()
{
    unsigned int age;
    printf("Please enter your age.\n");
    scanf("%d",&age);

    age=age*SecondsEveryYear;

    printf("Your age in seconds is %d.",age);

    return 0;
}
