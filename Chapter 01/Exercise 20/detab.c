#include <stdio.h>

#define TAB_TO_SPACE 4
#define MAX_LEN 1000

int get_line(char s[], int lim);

int main(void)
{
    int c;
    char line[MAX_LEN];

    while ((c = get_line(line, MAX_LEN)) > 0)
    {
        printf("%s\n", line);
    }
}

int get_line(char line[], int lim)
{
    int c;
    int i, j;
    int rem;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
    {
        if (c == '\t')
        {
            rem = TAB_TO_SPACE - i % TAB_TO_SPACE;

            for (j = 0; j < rem; ++j)
            {
                line[i] = ' ';
                i++;
            }
            i--;
        }
        else
        {
            line[i] = c;
        }
    }
    if (c == '\n')
    {
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return i;
}