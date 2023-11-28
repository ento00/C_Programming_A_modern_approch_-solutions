/* Sums a series of number (using double variables) */
#include<stdio.h>

int main(int argc, char const *argv[])
{
    double n, sum = 0.0;

    printf("This programs sums a series of double.\n");
    printf("Enter integers (0 to terminate): ");
    scanf("%lf", &n);
    while (n != 0.0)
    {
        sum += n;
        scanf("%lf", &n);
    }

    printf("The sum is: %.4lf\n", sum);

    return 0;
}
