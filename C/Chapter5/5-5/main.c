#include <stdio.h>

int main()
{
    int count=0,sum=0,max;

    printf("How many numbers do you want to calculate?\n");
    scanf("%d",&max);

    while(count++ <max){
        sum+=count;
    }

    printf("sum=%d\n",sum);

    return 0;
}
