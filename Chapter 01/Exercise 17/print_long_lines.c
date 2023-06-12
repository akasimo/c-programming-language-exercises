#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */
#define PRINT_LIMIT 5

int get_line(char line[], int maxline);

int main(void)
{
    int len;            /* current line length */
    char line[MAXLINE]; /* current input line */
    while ((len = get_line(line, MAXLINE)) > 0)
    {

        if (len > PRINT_LIMIT)
        {
            printf("%s\n", line);
        }
    }
    return 0;
}

int get_line(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }

    if (c == '\n')
    {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}
