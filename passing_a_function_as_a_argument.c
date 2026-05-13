#include <stdio.h>

void greetMoring() { printf("Good Moring\n"); }
void greetEvening() { printf("Good Evening\n"); }

void greet(void (*func)())
{
    func();
}

int main()
{
    greet(greetMoring);
    greet(greetEvening);
    return 0;
}