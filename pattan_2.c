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

        for (col = 1; col <= row; col++)
        {
            printf("%d", row);
        }
        printf("\n");
    }

    return 0;
}