#include<stdio.h>

int main()
{
    float number, max = 0;

    do
    {
        printf("Enter a number: ");
        scanf("%f", &number);
        if (max < number)
            max = number;
    }while (number > 0);
    
    if (!max)
        printf("No positive number entered\n");
    else
        printf("The largest number entered was %.3f", max);

    return 0;
}