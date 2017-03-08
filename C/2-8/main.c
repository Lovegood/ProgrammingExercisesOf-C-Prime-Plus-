#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("starting now:\n");
    one_three();
    printf("done!");
    return 0;
}

void one_three(){
    printf("one\n");
    two();
    printf("three\n");
}

void two(){
    printf("two\n");
}
