#include <stdio.h>
void function1();
void function2();

void main()
{
int x = 100;
function2();
printf("%d", x);
}

void function ()
{
    int x = 10;
    printf("%d", x);
}

void function2()
{
    int x = 0;
    function1();
    printf("%d", x);
}