#include <stdio.h>

void myFunction(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int myNumbers[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &myNumbers[i]);
    }
    myFunction(myNumbers, n);

    return 0;
}