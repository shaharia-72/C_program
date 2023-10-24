#include <stdio.h>

int even_numbers_count()
{
    int n, i, count = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            count++;
        }
    }

    return count;
}
int main()
{
    int count = even_numbers_count();
    printf("%d", count);

    return 0;
}