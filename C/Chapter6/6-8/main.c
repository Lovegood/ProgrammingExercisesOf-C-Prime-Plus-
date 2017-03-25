#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f1,f2;

    printf("Please enter two float-point numbers and separated them by space.\n");
    while(scanf("%f %f",&f1,&f2)==2){
        printf("(%f-%f)/(%f*%f)=%f\n",f1,f2,f1,f2,(f1-f2)/(f1*f2));
        printf("Please enter two float-point numbers to continue or enter \'q\' to quit.\n");
    }

    return 0;
}
