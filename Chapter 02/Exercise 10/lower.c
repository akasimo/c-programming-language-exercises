#include <stdio.h>

void lower(char s[]);

int main(void)
{
    char line[20] = "HelllooOO!";
    lower(line);
    printf("%s \n", line);
    return 0;
}

void lower(char s[])
{
    int i;
    for (i = 0; s[i] != '\0'; ++i)
    {
        s[i] = (s[i] <= 'Z' && s[i] >= 'A') ? s[i] - 'A' + 'a' : s[i];
    }
}