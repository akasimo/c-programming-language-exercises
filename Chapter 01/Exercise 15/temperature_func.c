#include <stdio.h>

int convert_to_celsius(int fahr);

int main(void)
{
    int fahr, celsius;
    int lower, upper, step;
    lower = 0;   /* lower limit of temperature scale */
    upper = 300; /* upper limit */
    step = 20;   /* step size */
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = convert_to_celsius(fahr);
        printf("%3d\t%6d\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}

int convert_to_celsius(int fahr)
{
    int celsius;
    celsius = 5 * (fahr - 32) / 9;
    return celsius;
}