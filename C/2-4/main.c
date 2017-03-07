#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=0;i<3;i++){
        jolly();
    }
    deny();

    return 0;
}

void jolly(){
    printf("For he's a jolly good fellow!\n");
}

void deny(){
    printf("Which nobody can deny!\n");
}
