#include<stdio.h>


int main(int argc, char const *argv[])
{
    int minutes, hours;

    printf("Enter a 24-hour time: (HH:MM)");
    scanf("%2d:%2d", &hours, &minutes);

    if (minutes<0 || minutes > 60 || hours > 24 || hours < 0)
        printf("Error: invalid input");
    else  
        if(hours >= 12)
            printf("Equivalent 12-hour time: %.2d:%.2d PM", (hours + 11) % 12 + 1, minutes);
        else
            printf("Equivalent 12-hour time: %.2d:%.2d AM", (hours + 11) % 12 + 1, minutes);       
    
    return 0;
}
