#include <stdio.h>
#include <stdlib.h>
#define convert 60

int main()
{
    int time,hour,minute;
    while(1){
        printf("Please enter time in minutes:");
        scanf("%d",&time);
        if(time<=0){
            break;
        }
        hour=time/convert;
        minute=time%convert;
        printf("The time you entered is %d hours and %d minutes.\n",hour,minute);
    }
    return 0;
}
