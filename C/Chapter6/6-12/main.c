#include <stdio.h>
#include <stdlib.h>

int main()
{
    int limit;
    double sum;

    while(1){
        printf("limit of number of terms:");
        scanf("%d",&limit);

        if(limit<=0){
            break;
        }

        //first
        sum=0;
        for(int i=1;i<=limit;i++){
            sum+=1.0/i;
        }
        printf("%lf ",sum);

        //second
        sum=0;
        int sign=1;
        for(int i=1;i<=limit;i++){
            sum+=(1.0/i)*sign;
            sign=-sign;
        }
        printf("%lf\n",sum);
    }

    return 0;
}
