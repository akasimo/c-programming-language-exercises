#include <stdio.h>

int main(void)
{
    int c, e = 1;
    while (e == 1)
    {
        c = getchar();
        e = (c != EOF);
        if (c == '\n')
            continue;
        printf("Result of the assignment of getchar() to EOF is %d\n", e);
    }
    return 0;
}