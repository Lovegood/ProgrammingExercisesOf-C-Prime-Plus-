#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=2147483647;
    unsigned int ui=4294967295;

    float fMax=3.40282e+038;
    float fMin=1.17549e-038;

    double dMax=1.79769e+308;
    double dMin=2.22507e-308;

    printf("int:%d %d %d\n",i,i+1,i+2);
    printf("unsigned int:%d %d %d\n\n",ui,ui+1,ui+2);

    printf("float Max:\t%f\n\t\t%f\n\t\t%f\n",fMax,fMax+1,fMax+2);
    printf("float Min:\t%f\n\t\t%f\n\t\t%f\n",fMin,fMin+1,fMin+2);

    printf("double Max:\t%lf\n\t\t%lf\n\t\t%lf\n",dMax,dMax+1,dMax+2);
    printf("double Min:\t%lf\n\t\t%lf\n\t\t%lf\n",dMin,dMin+1,dMin+2);

    return 0;
}
