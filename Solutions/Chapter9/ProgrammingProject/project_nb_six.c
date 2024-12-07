#include<stdio.h>

#define COEFFICIEnt_NUMBER 6

int compute(int x_value);

int main(int argc, char const *argv[])
{  
    int x_value;

    printf("This program evaluates the following expression: 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
    printf("Enter x value: ");
    scanf("%d", &x_value);
    printf("%d", compute(x_value));
    return 0;
}

int compute(int x_value)
{
    const int coeff[COEFFICIEnt_NUMBER] = {-6, 7, -1, -5, 2, 3};
    int res = 0, exponentiation = 1;
    
    for(int i = 0; i < COEFFICIEnt_NUMBER; i++)
    {
        if (i < 1)
            res += coeff[i];
        else
        {
            exponentiation *= x_value;
            res += coeff[i] * exponentiation;
        }
        //printf("%d\n", res);
    }

    return res;
}
