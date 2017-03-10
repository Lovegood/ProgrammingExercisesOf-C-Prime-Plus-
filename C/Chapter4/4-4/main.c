#include <stdio.h>
#include <stdlib.h>
#define meterToCentimeter 100
#define charMax 30

int main()
{
    float height;
    char name[charMax];

    printf("Please enter your name:");
    scanf("%s",&name);
    printf("Please enter your height in centimeters:");
    scanf("%f",&height);

    printf("%s, you are %.3f meter tall ",name,height/meterToCentimeter);

    return 0;
}
