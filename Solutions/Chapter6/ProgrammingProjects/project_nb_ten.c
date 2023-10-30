#include<stdio.h>

int main(void)
{
    int month, day, year, earliest_year, earliest_day, earliest_month;

    for(;;)
    {
        printf("Enter a date (mm/dd/yy)");
        scanf("%d/%d/%d", &month, &day, &year);
        
        if(!month && !day && year)
            break;
        if(month <= 0 || month >= 13 || year < 0 || day <= 0 || day >=32 )
        {
            printf("Error: wrong value for date entered");
        }   
       
        if(earliest_year > year) || 
        {
            earliest_year = year;
            earliest_day = day;
            earliest_month = month;
        }
        else
        {
            if(earliest_month > month && earliest_year == year)

