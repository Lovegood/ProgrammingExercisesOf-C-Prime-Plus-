#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=0;i<3;i++){
        smile();
    }
    printf("\n");
    for(int i=0;i<2;i++){
        smile();
    }
    printf("\n");
    smile();

    return 0;
}

void smile(){
    printf("Smile!");
}
