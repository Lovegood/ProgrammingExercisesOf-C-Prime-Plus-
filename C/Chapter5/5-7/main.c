#include <stdio.h>
#include <stdlib.h>

double cube(double num){
    return num*num*num;
}

int main()
{
    double num;
    printf("Please enter a double-point number:");
    scanf("%lf",&num);
    printf("%lf",cube(num));

    return 0;
}
