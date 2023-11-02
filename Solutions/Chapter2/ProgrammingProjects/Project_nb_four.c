#include<stdio.h>
#define TAX 5.0f


int main(int argc, char const *argv[])
{
    float amount;

    printf("Enter a dollars-and-cents ($$$.$$) amount: ");
    scanf("%f", &amount);

    printf("With tax added: %.2f\n", (amount + (amount * TAX / 100)));
    return 0;
}
