#include<stdio.h> 

int main(int argc, char const *argv[])
{
    int month_days, starting_day;

    printf("Enter the number of days in month: ");
    scanf("%d", &month_days);
    printf("Enter the starting day of the week (1 = SUN, 7 = SAT): ");
    scanf("%d", &starting_day);

    printf("S  M  T  W  T  F  S  ");
    for (int i = 1; i < month_days + starting_day; i++)
    {
        if (i % 7 == 1)
            printf("\n");
        if(i < starting_day)
            printf("   ");
        else
            printf("%-3d", i - starting_day + 1);
    }
    
    return 0;
}
