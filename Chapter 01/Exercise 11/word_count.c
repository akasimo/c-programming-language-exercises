#include <stdio.h>

#define IN 1
#define OUT 0

int main(void)
{
    int c, nl, nw, nc, state;
    nl = nw = nc = 0;

    state = OUT;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == '\n' || c == ' ' || c == '\t')
            state = OUT;
        else if (state == OUT)
        {
            ++nw;
            state = IN;
        }
    }

    printf("%d %d %d\n", nl, nw, nc);
    return 0;
}