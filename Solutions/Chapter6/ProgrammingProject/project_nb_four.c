// Calculate a broker's commission
#include<stdio.h>

int main(int argc, char const *argv[])
{
    float commission, value;
    while (1)
    {
        printf("Enter value of trade: ");
        scanf("%f", &value);
        
        if(!value)
            break;
        if(value < 2500.00f)
            commission = 30.00f + .017 * value;
        else if(value < 6250.00f)
            commission = 56.00f + .0066f * value;
        else if(value < 200000.00f)
            commission = 76.00f + .0034f * value;
        else if(value < 500000.00f)
            commission = 100.00f + .0022f * value;
        else if(value < 500000.00f)
            commission = 155.00f + .0011f * value;
        else
            commission = 255.00f + .0009 * value;
        
        if(commission < 39.00f)
            commission = 39.00f;

        printf("Commission: $%.2f\n", commission);
    } 
    
    return 0;
}
