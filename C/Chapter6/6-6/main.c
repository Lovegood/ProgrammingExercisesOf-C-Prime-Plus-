#include <stdio.h>
#include <math.h>

int main()
{
    int lower,upper;

    printf("Please enter the lower and upper limits for the table,and separated them by space.\n");
    scanf("%d %d",&lower,&upper);

    for(;lower<=upper;lower++){
        printf("%d\t%d\t%d\n",lower,lower*lower,lower*lower*lower);
    }

    return 0;
}
