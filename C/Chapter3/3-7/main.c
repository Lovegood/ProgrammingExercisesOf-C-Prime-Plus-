#include <stdio.h>
#include <stdlib.h>
#define centimeterToInch 2.54

int main()
{
    int height;
    printf("Please enter your height in centimeters.\n");
    scanf("%d",&height);

    double inches=height/centimeterToInch;

    printf("Your height in inches is %lf",inches);

    return 0;
}
