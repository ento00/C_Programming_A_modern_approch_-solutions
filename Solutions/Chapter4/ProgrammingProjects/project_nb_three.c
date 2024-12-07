#include<stdio.h>

int main(int argc, char const *argv[])
{
    int first_digit,second_digit, third_digit;

    printf("Enter two-digits number: ");
    scanf("%1d%1d%1d", &first_digit, &second_digit, &third_digit);
    printf("The reversal is : %d%d%d",third_digit, second_digit, first_digit);
    return 0;
}
