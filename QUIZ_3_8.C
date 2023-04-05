#include <stdio.h>
int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        printf("%d", i);
    }
    printf("\n");

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d", i);
    }
}