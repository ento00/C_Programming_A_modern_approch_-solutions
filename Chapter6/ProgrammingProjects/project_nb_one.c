#include<stdio.h>

int main(void)
{
    float number, largest= 0.0f;

    do
    {
        printf("Enter a number: ");
        scanf("%f", &number);

        if(largest < number)
            largest = number;
    }while(number > 0);

    printf("The largest number entered was:  %f\n",largest); 

	return 0;
}
