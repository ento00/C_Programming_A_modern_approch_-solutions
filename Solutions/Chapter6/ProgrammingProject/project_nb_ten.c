#include<stdio.h>
#include<limits.h>

int main(int argc, char const *argv[])
{
    int input_date_day, input_date_month, input_date_year, earliest_date_year, earliest_date_month, earliest_date_day; 
    earliest_date_year = earliest_date_month = earliest_date_day= __INT_MAX__;


    while (1)
    {
        printf("Enter a date(mm/dd/yy): ");
        scanf("%d/%d/%d", &input_date_month, &input_date_day, &input_date_year);
        if(input_date_day == 0 && input_date_month == 0 && input_date_year == 0)
            break;
        else
            if ((input_date_month <= 0 || input_date_month > 12 || input_date_day <= 0 || input_date_day > 31) && input_date_year != 0)
                printf("Error invalid date\n");
            else
                if ((earliest_date_year > input_date_year) || (earliest_date_year == input_date_year && earliest_date_month > input_date_month) ||
                    (earliest_date_year = input_date_year && earliest_date_month == input_date_month && earliest_date_day > input_date_day))
                {
                    earliest_date_day = input_date_day;
                    earliest_date_year = input_date_year;
                    earliest_date_month = input_date_month;
                }
    }
    
    printf(earliest_date_day != __INT_MAX__ ? "%d/%d/%.2d is the earlier date\n" : "No date entered\n",earliest_date_month, earliest_date_day, earliest_date_year);

    
    return 0;
}
