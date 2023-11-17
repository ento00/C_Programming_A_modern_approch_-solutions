/* Sums a series of number (using long variables) */
#include<stdio.h>

int main(int argc, char const *argv[])
{
    long n, sum = 0;

    printf("This programs sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");
    scanf("%ld", &n);
    while (n != 0)
    {
        sum += n;
        scanf("%ld", &n);
    }

    printf("The sum is: %ld", sum);
    
    return 0;
}
