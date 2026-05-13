#include <stdio.h>

// Callback with Parameters. w3schools.

void addNumbers(int a, int b)
{
    printf("The sum is : %d\n", a + b);
}

void calculate(void (*callback)(int, int), int x, int y)
{
    callback(x, y);
}

int main()
{
    calculate(addNumbers, 5, 3);

    return 0;
}