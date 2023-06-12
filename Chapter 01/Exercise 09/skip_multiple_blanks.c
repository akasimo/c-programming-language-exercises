#include <stdio.h>

int main(void)
{
    int c, prev;

    while ((c = getchar()) != EOF)
    {
        if ((prev == ' ') && (c == ' '))
            continue;
        putchar(c);
        prev = c;
    }

    return 0;
}