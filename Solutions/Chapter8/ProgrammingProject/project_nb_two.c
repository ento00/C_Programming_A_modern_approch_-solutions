#include <stdio.h>
#include <limits.h>

#define SIZE 10

int main(void) {
    int digits_counter[SIZE] = {0};
    int digit;
    long n;

    printf("Enter a number (max: %ld):", LONG_MAX);
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        digits_counter[digit]++;
        n /= 10;
    }

    printf("Digit:      ");
    for (int i = 0; i < SIZE; ++i)
        printf("%3d", i);


    printf("\nOccurrences:");
    for (int i = 0; i < SIZE; ++i)
        printf("%3d", digits_counter[i]);
    printf("\n");

    return 0;
}