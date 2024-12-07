#include<stdio.h>

int main()
{
    int number; 

    printf("Enter a number (max 3 digits): ");
    scanf("%d", &number);
    if (number<0)
        number*=-1;
    if (number>=0 && number<=9)
        printf("The number %d has %d digit", number, 1);
    else 
        if (number>=10 && number<99)
            printf("The number %d has %d digits", number, 2);
        else 
            if (number>=100 && number <= 999)
                printf("The number %d has %d digits", number, 3);
            else
                printf("Error: the number has more than 3 digits");

    return 0;
}