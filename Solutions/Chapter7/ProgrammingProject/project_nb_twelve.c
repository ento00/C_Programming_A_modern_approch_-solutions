#include <stdio.h>
#include <ctype.h>
int main(void)
{
    float first_number, second_number;
    char operator;

    printf("Enter an expression: ");
    scanf(" %f ", &first_number);

    while ((operator = getchar()) != '\n')
    {
        if(operator == ' ')
            continue;
        scanf("%f", &second_number);
        switch (operator) {
            case '+':
                first_number += second_number;
                break;
            case '-':
                first_number -= second_number;
                break;
            case '*':
                first_number *= second_number;
                break;
            case '/':
                first_number /= second_number;
                break;
            default:
                printf("Operation not supported \n");
                return 1;
        }
    }

    printf("Value of expression = %.2f", first_number);
    return 0;
}