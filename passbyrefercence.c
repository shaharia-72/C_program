#include <stdio.h>

void add(int *sum)
{
    *sum += 10;
    printf("the sum in function sum is %d\n", *sum);
    printf("the adderss of sum in function %p\n", &sum);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b); // take input as a=10 and b=20
    int sum = a + b;        // sum = 30
    add(&sum);
    printf("sum is in main function %d\n", sum);
    printf("The address of sum in main function: %p\n", &sum);

    return 0;
}
