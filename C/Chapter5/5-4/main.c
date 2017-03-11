#include <stdio.h>
#include <stdlib.h>
#define inchToCentimeter 2.54
#define footToInch 12

int main()
{
    float cm,inch;
    int feet;

    printf("Enter a height in centimeters:");
    scanf("%f",&cm);

    do{
        inch=cm/inchToCentimeter;
        feet=(int)(inch/footToInch);
        inch=inch-feet*footToInch;
        printf("%.1f cm = %d feet, %.1f inches\n",cm,feet,inch);

        printf("Enter a height in centimeters (<=0 to quit):");
        scanf("%f",&cm);
    }while(cm>0);

    return 0;
}
