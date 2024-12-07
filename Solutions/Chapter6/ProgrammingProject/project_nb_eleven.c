#include<stdio.h>

int main(int argc, char const *argv[])
{
    float result = 1.0f;
    int n;

    printf("Enter the n value: ");
    scanf("%d", &n);

    for (int i = 1, fact = 1; i <= n; fact = fact*i , i++)
        result+= 1.0/(i*fact);

    printf("Approximation value of the mathematical constant e is :%f", result);
    return 0;
}
