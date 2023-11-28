/* Prints a table of square using a for statement*/
#include<stdio.h>

int main(void)
{
    int n;
    long i;

    printf("This program prints a table of square\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    getchar();

    for (i = 1; i <= n; i++)
    {
        printf("%10ld%10ld\n", i, i * i);
        if(i % 24 == 0 && i != n)
        {
            printf("Press Enter to continue...");
            getchar();
        }
    }

    return 0;
}