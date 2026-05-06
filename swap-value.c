#include <stdio.h>

void swap (int*, int*);

int main ()
{
    int i, j;
    printf("Enter i and j valuses: ");
    scanf("%d %d", &i, &j);
    printf("Before swapping :%d %d\n", i,j);
    swap(&i, &j);
    printf("After swapping: %d %d\n", i,j);

    return 0;

}

void swap (int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}