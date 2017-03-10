#include <stdio.h>
#include <stdlib.h>
#define BTob 8

int main()
{
    float speed,size,time;

    printf("Please enter the download speed in megabits per second(Mbs):");
    scanf("%f",&speed);
    printf("Please enter the size of a file in megabytes(MB):");
    scanf("%f",&size);

    time=size*BTob/speed;

    printf("At %.2f megabits per second, a file of %.2f megabytes\ndownloads in %.2f seconds.",speed,size,time);

    return 0;
}
