#include<stdio.h>

int main(int argc, char const *argv[])
{
    int two_digit_number;

    printf("Enter two-digit number: ");
    scanf("%2d", &two_digit_number);

    if(two_digit_number < 10) 
        printf("Invalid input");
    else
        if (two_digit_number / 10 == 1)
            switch (two_digit_number % 10)
            {
                case 1:
                    printf("Eleven\n");
                    break;
                case 2:
                    printf("Twelve\n");
                    break;
                case 3:
                    printf("Thirteen\n");
                    break;
                case 4:
                    printf("Fourteen\n");
                    break;
                case 5:
                    printf("Fifteen\n");
                    break;
                case 6:
                    printf("Sixteen\n");
                    break;
                case 7:
                    printf("Seventeen\n");
                    break;
                case 8:
                    printf("Eighteen\n");
                    break;
                case 9:
                    printf("Nineteen\n");
                    break;
                default:
                    printf("Ten.\n");
                    break;
            }
        else
        {
            switch (two_digit_number/ 10)
            {
                case 2:
                    printf("Twenty");
                    break;
                case 3:
                    printf("Thirty");
                    break;
                case 4:
                    printf("Forty");
                    break;
                case 5:
                    printf("Fifty");
                    break;
                case 6:
                    printf("Sixty");
                    break;
                case 7:
                    printf("Seventy");
                    break;
                case 8:
                    printf("Eighty");
                    break;
                case 9:
                    printf("Ninety");
                    break;
            }
            switch (two_digit_number % 10)
            {
                case 1:
                    printf("-One\n");
                    break;
                case 2:
                    printf("-Two\n");
                    break;
                case 3:
                    printf("-Three\n");
                    break;
                case 4:
                    printf("-Four\n");
                    break;
                case 5:
                    printf("-Five\n");
                    break;
                case 6:
                    printf("-Six\n");
                    break;
                case 7:
                    printf("-Seven\n");
                    break;
                case 8:
                    printf("-Eight\n");
                    break;
                case 9:
                    printf("-Nine\n");
                    break;
            }
        }
    return 0;
}
