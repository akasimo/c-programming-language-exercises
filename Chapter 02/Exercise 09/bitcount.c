#include <stdio.h>

int bitcount(unsigned x);

int main(void)
{
    
    printf("%d \n", bitcount(0100110101));
    return 0;
}

int bitcount(unsigned x)
{
    int b;

    for (b = 0; x != 0; x &= x-1)
        ++b;

    return b;
}