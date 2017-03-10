#include <stdio.h>
#include <stdlib.h>
#define charMax 30

int main()
{
    char first[charMax],last[charMax];

    printf("Please enter your first name:");
    scanf("%s",&first);
    printf("Please enter your last name:");
    scanf("%s",&last);

    printf("%s,%s",last,first);

    return 0;
}
