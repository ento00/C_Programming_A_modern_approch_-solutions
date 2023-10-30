#include<stdio.h>

int main()
{
    int numerator, denominator, remainder, m, n;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    m = numerator;
    n = denominator;

    while(n!= 0)
    {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("In lowest terms: %d / %d", numerator/m, denominator/m);   
    return 0;
}

