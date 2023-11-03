#include<stdio.h>

int main(int argc, char const *argv[])
{
    int year, month, day, earliest_year, earliest_day, earliest_month;

    
    printf("Enter a date (format: mm/dd/yy), 0/0/0 to terminate insertion: ");
    scanf("%d /%d /%d", &month, &day, &year);

    if (!month && !day && !year)
        printf("No date entered\n");
    else
    {
        earliest_day = day;
        earliest_month = month;
        earliest_year = year;

        for (;;)
        {
            printf("Enter a date (mm/dd/yy): ");
            scanf("%d /%d /%d", &month, &day, &year);

            if (!month && !day && !year)
                break;  
                

            if((earliest_year > year) || (earliest_year == year && earliest_month > month) ||
               (earliest_year == year && earliest_month == month && earliest_day > day))
            {
                earliest_day = day;
                earliest_month = month;
                earliest_year = year;

            }
        }

        printf("The earliest date entered is %.2d/%.2d/%.2d\n", earliest_month, earliest_day, earliest_year);    
    }

    
    return 0;
}
