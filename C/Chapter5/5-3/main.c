#include <stdio.h>
#include <stdlib.h>
#define weekToDay 7

int main()
{
    int input,week,day;

    while(1){
        printf("Please enter the number of days:");
        scanf("%d",&input);

        if(input<=0){
            break;
        }

        week=input/weekToDay;
        day=input%weekToDay;

        printf("%d days are %d weeks, %d days.\n",input,week,day);
    }



    return 0;
}
