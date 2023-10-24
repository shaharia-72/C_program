#include <stdio.h>
int main()
{
    int n;
    int row, col, spc;

    scanf("%d", &n);

    for (row = 1; row <= n; row++)
    {
        for (spc = 1; spc <= n - row; spc++)
        {
            printf(" ");
        }

        for (col = 1; col <= row * 2 - 1; col++)
        {
            printf("%d", col);
        }
        printf("\n");
    }

    for (row = n - 1; row >= 1; row--)

    {
        for (spc = 1; spc <= n - row; spc++)
        {
            printf(" ");
        }

        for (col = 1; col <= row * 2 - 1; col++)
        {
            printf("%d", col);
        }
        printf("\n");
    }

    return 0;
}
