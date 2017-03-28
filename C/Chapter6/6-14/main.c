#include <stdio.h>
#define SIZE 8

int main()
{
    double first[SIZE],second[SIZE];

    for(int i=0;i<SIZE;i++){
        printf("Please enter a double-point number:");
        scanf("%lf",&first[i]);
    }

    double temporary=0.0;
    for(int count=0;count<SIZE;count++){
        temporary+=first[count];
        second[count]=temporary;
    }

    for(int i=0;i<SIZE;i++){
        printf("%lf\t",first[i]);
    }
    printf("\n");
    for(int i=0;i<SIZE;i++){
        printf("%lf\t",second[i]);
    }
    printf("\n");

    return 0;
}
