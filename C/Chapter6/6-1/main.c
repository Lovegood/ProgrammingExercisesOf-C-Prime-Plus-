#include <stdio.h>
#include <stdlib.h>
#define ASCII_a 97

int main()
{
    int letter[26];
    for(int i=0;i<26;i++){
        letter[i]=i+ASCII_a;
    }
    for(int i=0;i<26;i++){
        printf("%c ",letter[i]);
    }
    return 0;
}
