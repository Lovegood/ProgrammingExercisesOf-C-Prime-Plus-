#include <stdio.h>
#include <stdlib.h>

//ASCIIÂë A65 B66 C67 D68 E69 F70

int main()
{
    int F=70;
    for(int i=1;i<=6;i++){
        for(int count=0;count<i;count++){
            printf("%c",F-count);
        }
        printf("\n");
    }
    return 0;
}
