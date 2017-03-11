#include <stdio.h>
#include <stdlib.h>
#define gallonToLiter 3.785
#define mileToKilometer 1.609

int main()
{
    float mile,gallon,per;

    printf("Please enter the number of miles traveled:");
    scanf("%f",&mile);
    printf("Please enter the number of gallons of gasoline consumed:");
    scanf("%f",&gallon);

    per=mile/gallon;
    printf("The miles-per-gallon value is %.1f.\n",per);

    float liter,km;
    liter=gallon*gallonToLiter;
    km=mile*mileToKilometer/100;
    printf("The liters-per-100-km value is %f",liter/km);

    return 0;
}
