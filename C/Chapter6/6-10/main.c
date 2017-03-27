#include <stdio.h>

int main()
{
    int lower,upper,result;

    while(1){
        printf("Enter lower and upper integer limits:");

        if((scanf("%d %d",&lower,&upper)!=2)||lower>=upper){
            break;
        }

        result=0;
        for(int i=lower;i<=upper;i++){
            result+=i*i;
        }
        printf("The sums of the squares from %d to %d is %d\n",lower*lower,upper*upper,result);
    }

    printf("Done");

    return 0;
}
