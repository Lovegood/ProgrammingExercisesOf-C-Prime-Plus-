#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input;
    printf("Please enter an uppercase letter:");
    scanf("%c",&input);

    for(int outer=1;outer<=input-64;outer++){//ASCII A 65
        for(int i=outer;i<input-64;i++){
            printf(" ");
        }
        for(int ascending=0;ascending<outer;ascending++){
            printf("%c",'A'+ascending);
        }
        for(){
            printf("%c",);
        }
        printf("\n");
    }

    printf("\nend");

    return 0;
}
