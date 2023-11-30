#include <stdio.h>
#include <limits.h>

#define SIZE 10

int main(void)
{
    int digits_counter[SIZE] = {0};
    int digit;
    long n;

    for (;;)
    {
        printf("Enter a number (max: %ld), 0 to terminate:", LONG_MAX);
        scanf("%ld", &n);

        if (n <= 0)
            break;

        while (n > 0)
        {
            digit = n % 10;
            digits_counter[digit]++;
            n /= 10;
        }

        printf("Digit:      ");
        for (int i = 0; i < SIZE; ++i)
            printf("%3d", i);


        printf("\nOccurrences:");
        for (int i = 0; i < SIZE; ++i)
        {
            printf("%3d", digits_counter[i]);
            digits_counter[i] = 0;
        }
        printf("\n");
    }

    return 0;
}