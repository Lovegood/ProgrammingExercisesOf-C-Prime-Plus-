#include <stdio.h>
#include <stdlib.h>

void Temperatures(double fah){
    const float five=5.0;
    const float nine=9.0;
    const float thirtyTwo=32.0;
    const float absoluteZero=273.16;

    double Cel=five/nine*(fah-thirtyTwo);
    double Kel=Cel+absoluteZero;

    printf("Fahrenheit:%.2lf, Celsius:%.2lf, Kelvin:%.2lf.\n",fah,Cel,Kel);

}

int main()
{
    double Fah;
    while(1){
        printf("Please enter a Fahrenheit temperature:");
        if(scanf("%lf",&Fah)==0){
            break;
        }
        Temperatures(Fah);
    }

    return 0;
}
