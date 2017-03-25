#include <stdio.h>
#include <string.h>
#define SIZE 50

int main()
{
    char userInput[SIZE];

    printf("Please enter a single word.\n");
    scanf("%s",&userInput);

    for(int i=strlen(userInput)-1;i>=0;i--){
        printf("%c",userInput[i]);
    }

    return 0;
}
