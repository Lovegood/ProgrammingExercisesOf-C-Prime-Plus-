#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first,second;
    printf("This program computes moduli.\nEnter an integer to serve as the second operand:");
    scanf("%d",&second);
    printf("Now enter the first operand:");
    scanf("%d",&first);
    do{
        printf("%d %% %d is %d\n",first,second,first%second);

        printf("Enter next number for first operand (<= 0 to quit):");
        scanf("%d",&first);
    }while(first>0);

    printf("Done");

    return 0;
}
