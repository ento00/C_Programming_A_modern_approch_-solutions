#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x_value;

    printf("Enter value of x_value: ");
    scanf("%d", &x_value);

    printf("Result: %d\n",(3 * x_value * x_value * x_value * x_value * x_value) + (2 * x_value * x_value * x_value * x_value) - (5 * x_value * x_value * x_value)
    - (x_value * x_value) + (7 * x_value) - 6);
    
    return 0;
}
