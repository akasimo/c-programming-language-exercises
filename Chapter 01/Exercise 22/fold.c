#include <stdio.h>

#define FOLD 10
#define MAX_LEN 1000

int get_line(char s[], int lim);
int find_fold_location(char s[], int loc);

int main(void)
{
    int i;
    int c, length;
    int loc, fold_loc;
    char line[MAX_LEN];

    length = get_line(line, MAX_LEN);

    loc = 0;
    fold_loc = find_fold_location(line, loc);
    while ((c = line[loc]) != '\0')
    {
        if (fold_loc == loc)
        {
            putchar('\n');
            if (length - loc > FOLD)
            {
                fold_loc = find_fold_location(line, loc);
            }
        }
        putchar(c);
        ++loc;
    }
}

int get_line(char line[], int lim)
{
    int c;
    int i, j;
    int rem;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
    {   
        if (i < lim - 1)
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

int find_fold_location(char s[], int loc)
{
    int fold_loc;
    for (fold_loc = loc + FOLD; fold_loc > loc; --fold_loc)
    {
        if (s[fold_loc] != ' ')
        {
            return fold_loc;
        }
    }
    return loc + FOLD;
}