#include<stdio.h>

int main(int argc, char const *argv[])
{
    int first_date_month, first_date_year, first_date_day, second_date_year, second_date_month, second_date_day;

    printf("Enter first date(mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &first_date_month, &first_date_day, &first_date_year);
    
    printf("Enter second date(mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &second_date_month, &second_date_day, &second_date_year);

    if(first_date_year > second_date_year)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", second_date_month, second_date_day, second_date_year, first_date_month, first_date_day, first_date_year);
    else   
        if (first_date_year < second_date_year)
            printf("%d/%d/%.2d is earlier than %d/%d/%.2d", first_date_month, first_date_day, first_date_year,  second_date_month, second_date_day, second_date_year);
        else
            if (first_date_month > second_date_month)
                printf("%d/%d/%.2d is earlier than %d/%d/%.2d", second_date_month, second_date_day, second_date_year, first_date_month, first_date_day, first_date_year);
            else 
                if(first_date_month < second_date_month)
                    printf("%d/%d/%.2d is earlier than %d/%d/%.2d", first_date_month, first_date_day, first_date_year,  second_date_month, second_date_day, second_date_year);
            else
                if(first_date_day > second_date_day)
                    printf("%d/%d/%.2d is earlier than %d/%d/%.2d", second_date_month, second_date_day, second_date_year, first_date_month, first_date_day, first_date_year);
                else
                    if(first_date_day < second_date_day)
                        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", first_date_month, first_date_day, first_date_year,  second_date_month, second_date_day, second_date_year);
                else
                    printf("Entered the same date");
        
    return 0;
}
