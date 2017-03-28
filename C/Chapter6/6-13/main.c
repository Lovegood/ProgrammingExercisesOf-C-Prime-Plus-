#include <stdio.h>
#include <math.h>
#define SIZE 8

int main()
{
    int num[SIZE];

    for(int i=0;i<SIZE;i++){
        num[i]=pow(2,i+1);
    }

    int count=0;
    do{
        printf("%d ",num[count]);
        count++;
    }while(count<SIZE);

    return 0;
}
