#include<stdio.h>

int main(void)
{   
    float loan = 0.0f, rate = 0.0f, payment = 0.0f;
    int number_of_payments, i = 1;


    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &rate);

    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    printf("Enter the number of payments: ");
    scanf("%d", &number_of_payments);
    

    while (number_of_payments-- > 0)
    {
        loan = loan - payment + (loan * rate / 100.0 / 12.0);
        printf("Balance remaining after %d payment: $%.2f\n", i++, loan);
    }
    
    return 0;
}
