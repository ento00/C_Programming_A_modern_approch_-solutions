#include<stdio.h>
#include <stdbool.h>
#include <limits.h>

#define SIZE 10


int main(void)
{
    bool flag = false;
    int digit, digit_seen[SIZE] = {0};
    long n;

    printf("Enter a number (max: %ld:)", LONG_MAX);
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;
        if (!flag && digit_seen[digit])
            flag = true;
        digit_seen[digit]++;
        n /= 10;
    }

    if (flag)
    {
        printf("Repeated digit(s): ");
        for (digit = 0; digit < SIZE; digit++)
            if (digit_seen[digit] > 1)
                printf("%d ", digit);
    }
    else
        printf("No repeated digit\n");

    return 0;
}