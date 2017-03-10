#include <stdio.h>
#include <stdlib.h>
#define quartToGrams 950
#define gramEveryMolecule 3//10^-23直接输出 否则ull都不够用QAQ

int main()
{
    int quart;
    printf("Please enter the amount of water in quart.\n");
    scanf("%d",&quart);

    int grams=quart*quartToGrams;
    unsigned int molecules=grams/gramEveryMolecule;

    //处理科学计数法
    int exponential=-23+getIntegerLength(molecules);
    //output result
    printf("The number of water molecule is %dx10^%d\n",molecules,exponential);

    return 0;
}

int getIntegerLength(int integer){

    int result=0;
    for(;integer!=0;result++){
        integer/=10;
    }

    return result;
}
