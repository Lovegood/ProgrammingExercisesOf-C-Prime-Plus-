#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int outer=1;outer<6;outer++){
        for(int inner=1;inner<=outer;inner++){
            printf("$");
        }
        printf("\n");
    }

    return 0;
}

