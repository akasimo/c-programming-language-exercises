#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("From standard headers:\n");
    printf("char min: %d\n", CHAR_MIN);
    printf("char max: %d\n", CHAR_MAX);
    printf("int min: %d\n", INT_MIN);
    printf("int max: %d\n", INT_MAX);
    printf("long min: %ld\n", LONG_MIN);
    printf("long max: %ld\n", LONG_MAX);
    printf("short min: %d\n", SHRT_MIN);
    printf("short max: %d\n", SHRT_MAX);
    printf("unsigned char max: %u\n", UCHAR_MAX);
    printf("unsigned int max: %u\n", UINT_MAX);
    printf("unsigned long max: %lu\n", ULONG_MAX);
    printf("unsigned short max: %u\n", USHRT_MAX);
    printf("float min: %.3e\n", FLT_MIN);
    printf("float max: %.3e\n", FLT_MAX);
    printf("double min: %.3e\n", DBL_MIN);
    printf("double max: %.3e\n", DBL_MAX);
    return 0;
}
