#include <stdio.h>

#define TAB_TO_SPACE 4
#define MAX_LEN 1000

int get_line(char s[], int lim);
void entab(char s[]);

int main(void)
{
    int c;
    char line[MAX_LEN];

    while ((c = get_line(line, MAX_LEN)) > 0)
    {
        entab(line);
        // printf("%s\n", line);
    }
}

int get_line(char line[], int lim)
{
    int c;
    int i, j;
    int rem;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
    {
        line[i] = c;
    }
    if (c == '\n')
    {
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return i;
}

void entab(char line[])
{
    char temp[MAX_LEN];
    int i, j;
    int rem;
    int diff = 0;
    int valid;

    for (i = 0; !(line[i] == '\0' || line[i] == '\n'); i++)
    {
        if (line[i] != ' ')
        {
            temp[i - diff] = line[i];
        }
        else
        {
            rem = TAB_TO_SPACE - i % TAB_TO_SPACE;
            valid = 1;
            for (j = 1; j < rem; j++)
            {
                if (line[i + j] != ' ')
                {
                    valid = 0;
                }
            }
            if (valid == 1)
            {
                temp[i - diff] = '\t';
                diff = diff + rem - 1;
                i = i + rem - 1;
            }
            else
            {
                temp[i - diff] = line[i];
            }
        }
    }
    printf("%s\n", temp);
}