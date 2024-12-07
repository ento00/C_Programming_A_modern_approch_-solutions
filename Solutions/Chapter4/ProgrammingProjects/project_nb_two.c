#include<stdio.h>

int main(int argc, char const *argv[])
{
    int number;

    printf("Enter three-digits number: ");
    scanf("%d", &number);
    printf("The reversal is : %d",number%100%10*100 + number%100/10*10 + number/100);
    
    return 0;
}
