#include <stdio.h>
#include <math.h>

void area_of_circle()
{
    double R, area;

    scanf("%lf", &R);

    area = 3.141592653 * R * R;

    printf("%.9lf", area);
}

int main()
{
    area_of_circle();

    return 0;
}