/* Balances a checkbook */
#include<stdio.h>

int main(void)
{
    int cmd;
    float balance = 0.0f, credit, debit;

    printf("*** ACME checkbook-balancing program ***\n");
    printf("Commands: 0 = Clear, 1 = Credit, 2 = Debit, ");
    printf("3 = Balance, 4 = Exit\n\n");

    for(;;)
    {
        printf("Enter command: ");
        scanf("%d", &cmd);
        switch(cmd)
        {
            case 0:
                balance = 0.0f;
                break;
            case 1:
                printf("Enter amount of credit: ");
                scanf("%f", &credit);
                balance += credit;
                break;
            case 2:
                printf("Enter amount of debit: ");
                scanf("%f", &debit);
                balance -= debit;
                break;
            case 3:
                printf("current balnce : $%.2f\n", balance);
                break;
            case 4:
                return 0;
            default:
        }
    }        
              

}
