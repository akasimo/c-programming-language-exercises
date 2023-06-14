#include <stdio.h>

#define MAX_LEN 100

int main(void)
{
    int c, i, lim;
    char s[MAX_LEN];

    lim = MAX_LEN;
    for (i = 0; i < lim - 1; ++i)
    {
        if ((c = getchar()) != '\n')
        {

            if (c != EOF)
            {
                s[i] = c;
            }
            else
            {
                break;
            }
        }

        else
        {
            break;
        }
    }

    return 0;
}
