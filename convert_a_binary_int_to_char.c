#include <stdio.h>

void binary_to_ascii_(unsigned int value)
{
    unsigned int quotient;
    quotient = value / 10;

    if (quotient != 0)
    {
        binary_to_ascii_(quotient);
    }

    putchar(value % 10 + '0');
}

int main()
{
    binary_to_ascii_(101101);

    return 0;
}