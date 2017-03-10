#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define charMax 30

int main()
{
    char first[charMax];
    printf("Please enter your first name:\n");
    scanf("%s",&first);

    printf("\"%s\"\n",first);
    printf("\"%+20s\"\n",first);
    printf("\"%-20s\"\n",first);
    printf("\"%*s\"\n",strlen(first)+3,first);

    return 0;
}
