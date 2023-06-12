#include <stdio.h>
/* count digits, white space, others */

#define NUM_CHARS 128

int main(void)
{
    int c, i, j;
    int char_counts[NUM_CHARS];

    for (i = 0; i <= NUM_CHARS; ++i)
    {
        char_counts[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        ++char_counts[c];
    }

    printf("\n");
    for (i = 0; i <= NUM_CHARS; ++i)
    {
        if (char_counts[i] > 0)
        {
            printf("Frequency of the char ");
            if (i == '\n')
            {
                printf("'\\n': ");
            }
            else if (i == '\t')
            {
                printf("'\\t': ");
            }
            else if (i == '\b')
            {
                printf("'\\b': ");
            }
            else
            {
                printf("'%c' : ", i);
            }

            for (j = 0; j < char_counts[i]; ++j)
            {
                putchar('+');
            }
            printf("\n");
        }
    }
    return 0;
}
