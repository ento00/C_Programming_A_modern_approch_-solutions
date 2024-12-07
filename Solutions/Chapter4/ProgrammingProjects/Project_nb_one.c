#include<stdio.h>

int main(int argc, char const *argv[])
{
    int number;

    printf("Enter two-digits number: ");
    scanf("%d", &number);
    printf("The reversal is : %d",number % 10*10 + number/10);
    return 0;
}
