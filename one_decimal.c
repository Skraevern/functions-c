#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float one_decimal_rounded_down(float num);
float one_decimal_rounded_nearest(float num);
float one_decimal_rounded_up(float num);

int main(void)
{
    float number = 37.777779;

    float down = one_decimal_rounded_down(number);
    float nearest =one_decimal_rounded_nearest(number);
    float up = one_decimal_rounded_up(number);

    printf("rounded down %.1f\n", down);
    printf("rounded nearest %.1f\n", nearest);
    printf("rounded up %.1f\n", up);

    return 0;
}

float one_decimal_rounded_down(float num)
{
    float calc = floorf(num * 1000) / 1000;
    return calc;
}
float one_decimal_rounded_nearest(float num)
{
    float calc = roundf(num * 1000) / 1000;
    return calc;
}
float one_decimal_rounded_up(float num)
{
    float calc = ceilf(num * 1000) / 1000;
    return calc;
}