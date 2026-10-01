#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b;


    printf("Enter first number (a): ");
    scanf("%lf", &a);

    printf("Enter second number (b): ");
    scanf("%lf", &b);

    double add = a+b;
    double subtract = a - b;
    double multiply = a*b;

    printf("Add= %lf\n",add);
    printf("Subtract = %lf\n",subtract);
    printf("Multiply = %lf\n", multiply);

    if(b!=0)
    {
        double divide = a/b;
        int modulus = (int)a%(int)b;
        printf("Divide = %lf\n", divide);
        printf("Modulus = %d\n", modulus);

    }
    else
    {
        printf("Divide = Error\n");
        printf("Modulus = Error\n");
    }




    return 0;
}
