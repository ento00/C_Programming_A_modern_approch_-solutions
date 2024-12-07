#include<stdio.h>

int main(int argc, char const *argv[])
{
    float result = 1.0f, epsilon;

    printf("Enter the epsilon value: ");
    scanf("%d", &epsilon);


    // Floating point value should not be compared in this way!!!!
    for (int i = 1, fact = 1; 1.0/(fact*i) >epsilon; fact = fact*i , i++)
        result+= 1.0/(i*fact);

    printf("Approximation value of the mathematical constant e is :%f", result);
    return 0;
}
