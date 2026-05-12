#include <stdio.h>

int main ()
{
    int result;
    int addition ();
    result = addition(); 
    printf("SUM = %d", result);
}
int addition ()
{
int num1 , num2;

num1 = 10;
num2 = 20;
return (num1 + num2);
}