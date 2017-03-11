#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main()
{
    float f=1.0/3.0;
    double d=1.0/3.0;

    printf("f:%.4f\nd:%.4lf\n\n",f,d);
    printf("f:%.12f\nd:%.12lf\n\n",f,d);
    printf("f:%.16f\nd:%.16lf\n\n",f,d);
    printf("FLT_DIG:%d\nDBL_DIG:%d\n\n",FLT_DIG,DBL_DIG);
    //FLT_DIG DBL_DIG分别定义了float double有效数字的位数 是整数

    return 0;
}
