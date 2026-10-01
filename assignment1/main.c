#include <stdio.h>
#include <stdlib.h>

int main()
{
    const double pi =3.142;
    double radius;
    double area;

    printf("Enter radius");
    scanf("%lf" ,&radius);

    area= pi * radius * radius;

    printf("The area is,%lf\n", area);
    return 0;
}
