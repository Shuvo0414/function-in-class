#include <stdio.h>

float toCelsius (float f)
{
    return (5.0/9.0) * (f - 32.0);
}

int main ()
{
    float fValue = 98.8;
    float result  = toCelsius(fValue);
    printf ("Farenheit: %.2f\n", fValue );
    printf ("Convert Fahrenheit to Celsius : %.2f\n", result);

    return 0;
}