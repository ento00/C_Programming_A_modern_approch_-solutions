#include<stdio.h>

int main(void)
{
    int number, reversed_number = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    do
    {
        reversed_number *= 10;
        reversed_number += number % 10;
        number /= 10; 
    }while(number != 0);
    
    printf("The reversal is %d\n", reversed_number);


    return 0;
}
