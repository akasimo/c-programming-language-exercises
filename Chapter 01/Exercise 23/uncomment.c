#include <stdio.h>

#define MAX_LEN 2000
#define CODE 1
#define COMMENT 0

void get_text(char s[], int lim);

/* check comment */
int main(void)
{
    int i, l;
    char c;
    char line[MAX_LEN];
    char code[MAX_LEN];
    int state;

    get_text(line, MAX_LEN);

    l = i = 0;
    state = CODE;
    printf("\n---------------------------------\n");
    while ((c = line[i]) != '\0')
    {
        if (state == CODE)
        {
            if (i < MAX_LEN - 2 && line[i] == '/' && line[i + 1] == '*')
            {
                state = COMMENT;
                i++; // Skip past the comment start marker
            }
            else
            {
                code[l] = c;
                l++;
            }
        }
        else if (state == COMMENT)
        {
            if (line[i] == '*' && line[i + 1] == '/')
            {
                state = CODE;
                i++; // Skip past the comment end marker
            }
        }
        i++;
    }

    code[l] = '\0';
    printf("\n%s", code);

    return 0;
}

void get_text(char line[], int lim)
{
    int c, i;
    for (i = 0; (c = getchar()) != EOF && i < lim - 1; ++i)
    {
        line[i] = c;
    }
    line[i] = '\0';
}
