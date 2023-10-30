#include<stdio.h>

int main(void)
{
    int days, start;

    do
    {
        printf("Enter number of days in month: ");
        scanf("%d", &days);
        printf("Enter starting day of the week (1 = Sun, 7 = Sat):  ");
        scanf("%d", &start);
     }while((days <= 0 || days>31) && (start <= 0 || start > 7));
    
    printf("\033[1;31m SU\033[1;0m MO TU WE TH FR SA \n");
 
    for(int i = 1; i < start; i++)
        printf("   ");

    for(int i = 1; i <= days; i++)
    {
        if((i + start - 1) % 7 == 1)
            printf("\033[1;31m %2d", i);
        else
            printf("\033[1;0m %2d", i);
        if(!((i+start-1)%7))
                printf("\n");
                
    }
    printf("\n");
    return 0;
}
