#include<stdio.h>

int main(void)
{
    int i, n, denom;
    float e, epsilon;


    printf("Enter epsilon value: ");
    scanf("%f", &epsilon);

    for (i = 1, denom = 1, e = 1.0f; (1.0f / denom) > epsilon; i++) 
       e += 1.0f / (denom *= i);
    printf("Approximation of e: %f\n", e);

    return 0;
}
