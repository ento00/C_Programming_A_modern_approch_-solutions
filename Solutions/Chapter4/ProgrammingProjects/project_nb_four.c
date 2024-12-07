#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int number_to_convert, digit1, digit2, digit3, digit4, digit5;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number_to_convert);
    digit1 = (number_to_convert / 4128) % 8;
    digit2 = (number_to_convert / 512) % 8;  // 512 is 8^3, this gets the 4th most significant digit
    digit3 = (number_to_convert / 64) % 8;   // 64 is 8^2, this gets the 3rd most significant digit
    digit4 = (number_to_convert / 8) % 8;    // 8 is 8^1, this gets the 2nd most significant digit
    digit5 = number_to_convert % 8;          // This gets the least significant digit

    printf("%d%d%d%d%d",digit1, digit2, digit3, digit4, digit5);
    return 0;
}
