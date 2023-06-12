#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */

int get_line(char line[], int maxline);
void reverse(char s[]);

int main(void)
{
    int c;
    int len;
    char line[MAXLINE]; /* current input line */

    while ((len = get_line(line, MAXLINE)) > 0)
    {
        reverse(line);
        printf("%s", line);
    }
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

void reverse(char s[])
{
    int len;
    int i;
    int temp;

    /* stop when equal to \0 or \n */
    for (len = 0; !(s[len] == '\0' || (s[len] == '\n')); ++len)
        ;
    --len;
    for (i = 0; i < len; ++i, --len)
    {
        temp = s[len];
        s[len] = s[i];
        s[i] = temp;
    }
}
