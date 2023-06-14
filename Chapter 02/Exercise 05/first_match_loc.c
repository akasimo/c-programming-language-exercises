#include <stdio.h>

int first_match_loc(char s1[], char s2[]);
int is_match(char s2[], int c);

int main(void)
{
    int loc;
    char s1[10] = "potatos";
    char s2[10] = "tomatoz";

    loc = first_match_loc(s1, s2);
    printf("First match is in %d \n", loc);
    return 0;
}

int first_match_loc(char s1[], char s2[])
{
    int i, j;
    int match;

    for (i = 0; s1[i] != '\0'; ++i)
    {
        match = is_match(s2, s1[i]);
        if (match)
        {
            return i;
        }
    }
    return -1;
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