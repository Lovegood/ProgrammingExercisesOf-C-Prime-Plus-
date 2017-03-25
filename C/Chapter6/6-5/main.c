#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input;
    printf("Please enter an uppercase letter:");
    scanf("%c",&input);

    for(char outer='A';outer<=input;outer++){//ASCII A 65
        for(int i=outer;i<input;i++){
            printf(" ");
        }
        char ascending;
        for(ascending='A';ascending<outer;ascending++){
            printf("%c",ascending);
        }
        for(;ascending>='A';ascending--){
            printf("%c",ascending);
        }
        printf("\n");
    }

    return 0;
}
