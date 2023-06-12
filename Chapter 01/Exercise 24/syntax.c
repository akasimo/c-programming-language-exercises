#include <stdio.h>

#define MAX_LEN 2000

void get_text(char s[], int lim);

int main(void)
{
    int i, current_line;
    char c;
    char line[MAX_LEN];
    char stack[MAX_LEN] = {0};
    int stack_len;

    get_text(line, MAX_LEN);

    printf("\n---------------------------------\n");

    i = stack_len = 0;
    current_line = 1;
    while ((c = line[i]) != '\0')
    {
        if (c == '(')
        {
            stack[stack_len] = c;
            ++stack_len;
        }
        else if (c == ')')
        {
            if (stack[stack_len - 1] != '(')
            {
                printf("Unclosed at line %d %d!\n", current_line, i);
                break;
            }
            --stack_len;
        }
        else if (c == '[')
        {
            stack[stack_len] = c;
            ++stack_len;
        }
        else if (c == ']')
        {
            if (stack[stack_len - 1] != '[')
            {
                printf("Unclosed at line %d %d!\n", current_line, i);
                break;
            }
            --stack_len;
        }
        else if (c == '{')
        {
            stack[stack_len] = c;
            ++stack_len;
        }
        else if (c == '}')
        {
            if (stack[stack_len - 1] != '{')
            {
                printf("Unclosed at line %d %d!\n", current_line, i);
                break;
            }
            --stack_len;
        }
        else if (c == '\n')
        {
            ++current_line;
        }
        i++;
    }

    if (stack_len != 0)
    {
        printf("Unclosed at line %d %d!\n", current_line, i);
    }

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
