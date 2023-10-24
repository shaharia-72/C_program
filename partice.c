#include <stdio.h>

int fun(int x, int y)
{
    printf("the value of x in main function is: %d\n", x + 10);
    printf("the value of y in main function is: %d\n", y + 20);
    printf("the the address of value x in main function is: %p\n", &x);
    printf("the the address of value y in main function is: %p\n", &y);
    return 0;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    fun(a, b);

    printf("the value of a in main function is: %d\n", a);
    printf("the value of b in main function is: %d\n", b);
    printf("the the address of value a in main function is: %p\n", &a);
    printf("the the address of value b in main function is: %p\n", &b);

    return 0;
}