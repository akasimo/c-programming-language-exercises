#include <stdio.h>

#define NEW 1
#define OLD 0

int main(void)
{
    int c, state;

    state = NEW;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n' || c == ' ' || c == '\t')
        {
            if (state == OLD)
            {
                state = NEW;
                putchar('\n');
            }
        }
        else
        {
            putchar(c);
            state = OLD;
        };
    }
    return 0;
}