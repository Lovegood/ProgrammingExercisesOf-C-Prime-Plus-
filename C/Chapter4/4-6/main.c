#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define charMax 30

int main()
{
    char first[charMax],last[charMax];

    printf("Please enter your first name:");
    scanf("%s",&first);
    printf("Please enter your last name:");
    scanf("%s",&last);

    int f=strlen(first);
    int l=strlen(last);

    printf("%s %s\n",first,last);
    printf("%*d %*d\n",f,f,l,l);

    printf("%s %s\n",first,last);
    printf("%-*d %-*d\n",f,f,l,l);

    return 0;
}
