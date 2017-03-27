#include <stdio.h>
#define SIZE 8

int main()
{
    int num[SIZE];

    for(int count=0;count<SIZE;count++){
        printf("Please enter a integer:");
        scanf("%d",&num[count]);
    }

    printf("Eight integers was read.Now I will print them in reverse order.\n");

    for(int i=SIZE-1;i>=0;i--){
        printf("%d ",num[i]);
    }

    return 0;
}
