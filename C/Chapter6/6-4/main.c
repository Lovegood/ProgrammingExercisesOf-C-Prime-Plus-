#include <stdio.h>
#include <stdlib.h>
#define ASCII_A 65
#define line 6

int main()
{
    int count=0;
    for(int i=1;i<=line;i++){
        for(int j=0;j<i;j++){
            printf("%c",ASCII_A+count);
            count++;
        }
        printf("\n");
    }
    return 0;
}
