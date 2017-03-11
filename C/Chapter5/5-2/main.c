#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Please enter an integer:");
    scanf("%d",&num);

    for(int i=0;i<=10;i++){
        printf("%d ",num+i);
    }

    return 0;
}
