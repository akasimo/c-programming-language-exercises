#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */

int get_line(char line[], int maxline);

int main(void)
{
    int c;
    int len;
    char line[MAXLINE]; /* current input line */

    while ((len = get_line(line, MAXLINE)) > 0)
    {
        if (len > 1)
        {
            printf("%s", line);
        }
    }
}

int get_line(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }

    while (i > 0 && (s[i - 1] == ' ' || s[i - 1] == '\t')) /* remove trailing blanks and tabs */
        --i;

    if (c == '\n')
    {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}