#include <stdio.h>

int main(void)
{
    long counter = 0;
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n' || c == ' ' || c == '\t')
            ++counter;
    }

    printf("Total count of blanks, tabs and newlines is %ld\n", counter);
    return 0;
}