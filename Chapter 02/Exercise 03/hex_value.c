#include <stdio.h>
#include <ctype.h>

int htoi(char s[]);

int main(void)
{
    char line[10]= "0x01B";
    printf("%d \n", htoi(line));
    return 0;
}

int htoi(char s[])
{
    int i, n;
    n = 0;
    // for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
    //     n = 10 * n + (s[i] - '0');

    i = 2;
    while (s[i] != '\0') {
        if (isdigit(s[i])) {
            n = 16 * n + s[i] - '0';
        }
        else if ( (s[i] >= 'A' && s[i] <= 'F')){
            n = 16 * n + (s[i] - 'A'+ 10);
        }        
        else if ( (s[i] >= 'a' && s[i] <= 'f')){
            n = 16 * n + (s[i] - 'f'+ 10);
        }
        else {
            return n;
        }
        ++i;
    }
    return n;
}
