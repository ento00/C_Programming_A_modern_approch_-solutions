/*
    Computes pairwise avarages of three numbers.
*/
#include<stdio.h>

double avarage(double a, double b)
{
    return (a + b) / 2;
}

int main(int argc, char const *argv[])
{
    double x, y, z;

    printf("Enter three numbers: ");
    scanf("%lf%lf%lf", &x, &y, &z);
    printf("Avarage of %g and %g: %g\n", x, y, avarage(x, y));
    printf("Avarage of %g and %g: %g\n", y, z, avarage(y, z));
    printf("Avarage of %g and %g: %g\n", x, z, avarage(x, z));

    return 0;
}
