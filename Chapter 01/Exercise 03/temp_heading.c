#include <stdio.h>

/* print fahrenheit-celsius table for
    fahr = 0, 20, ..., 300 */

int main(void)
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Fahr Celcius\n");
    printf("------------------\n");

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5.0 / 9.0 * (fahr - 32);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr += step;
    }
    return 0;
}