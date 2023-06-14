#include <stdio.h>

void delete_matching(char s1[], char s2[]);
void delete_char(char s1[], int loc);
int is_match(char s2[], int c);

int main(void)
{
    char s1[10] = "potatos";
    char s2[10] = "tomatoz";

    delete_matching(s1, s2);
    printf("%s \n", s1);
    return 0;
}

void delete_matching(char s1[], char s2[])
{
    int i, j;
    int match;

    for (i = 0; s1[i] != '\0'; ++i)
    {
        match = is_match(s2, s1[i]);
        if (match == 1)
        {
            delete_char(s1, i);
            --i;
        }
    }
}

void delete_char(char s1[], int loc)
{
    while (s1[loc] != '\0')
    {
        s1[loc] = s1[loc + 1];
        ++loc;
    }
}

int is_match(char s2[], int c)
{
    int j;
    for (j = 0; s2[j] != '\0'; ++j)
    {
        if (s2[j] == c)
        {
            return 1;
        }
    }
    return 0;
}