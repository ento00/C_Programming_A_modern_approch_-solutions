#include<stdio.h>

int main(int argc, char const *argv[])
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);
    if (number < 2)
        printf("Number must be greatest than 1");
    else
        for(int i = 2; i*i <= number; i+=2)
            printf("%d\n", i*i);

    return 0;
}
