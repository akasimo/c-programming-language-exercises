#include <stdio.h>
/* count digits, white space, others */

#define IN 1
#define OUT 0
#define MAXLEN 20

int main(void)
{
    int c, i, j;
    int counter, state;
    int wordlen[20];

    state = OUT;

    for (i = 1; i <= MAXLEN; ++i)
    {
        wordlen[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c == '\t' || c == '\n' || c == ' ')
        {
            if (counter != 0)
            {   
                if (counter > MAXLEN) {
                    counter = MAXLEN;
                }
                ++wordlen[counter];
                counter = 0;
            }
        }
        else
        {
            ++counter;
        }
    }

    for (i = 1; i <= MAXLEN; ++i)
    {
        printf("Word with length %2d : ", i);
        for (j = 0; j < wordlen[i]; ++j)
        {
            printf("+");
        }
        printf("\n");
    }
    return 0;
}
