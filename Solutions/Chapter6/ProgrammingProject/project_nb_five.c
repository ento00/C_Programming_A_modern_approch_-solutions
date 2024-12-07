#include<stdio.h>

int main(int argc, char const *argv[])
{
    int number, reversed_number, i = 10;

    printf("Enter a number: ");
    scanf("%d", &number);

    reversed_number = number % 10;
    number = number / 10;
    while (number > 0)
    {
        reversed_number = reversed_number *10 + number % 10;
        number = number / 10;
    }
    
    printf("Reversed number:  %d\n", reversed_number);

    return 0;
}
