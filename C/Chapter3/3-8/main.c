#include <stdio.h>
#include <stdlib.h>
//以下均为cup to xxx，省略cup
#define toPint 0.5
#define toOunce 8
#define toTablespoon 16
#define toTeaspoon 48

int main()
{
    float cup;

    printf("Please enter the volume in cups.\n");
    scanf("%f",&cup);

    printf("\nThe volume:\n");
    printf("pints\t\t%f\n",cup*toPint);
    printf("cups\t\t%f\n",cup);
    printf("ounces\t\t%f\n",cup*toOunce);
    printf("tablespoons\t%f\n",cup*toTablespoon);
    printf("teaspoons\t%f\n",cup*toTeaspoon);

    return 0;
}
