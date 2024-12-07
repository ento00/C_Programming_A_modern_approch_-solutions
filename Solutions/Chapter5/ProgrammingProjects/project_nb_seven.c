#include<stdio.h>

int main(int argc, char const *argv[])
{
    int number_one, number_two, number_three, number_four;
    printf("Enter four integers: ");
    scanf("%d%d%d%d", &number_one, &number_two, &number_three, &number_four);

    int a,b,c,d;
    if(number_one > number_two)
    {
        a = number_one;
        b = number_two;
    }
    else
    {
        a = number_two;
        b = number_one;
    }

    if(number_three > number_four)
    {
        c = number_three;
        d = number_four;
    }
    else
    {
        c = number_four;
        d = number_three;
    
    }

    if(a > c)
        printf("The largest is %d \n",a);
    else   
        printf("The largest is %d \n",c);
    if(b < d)
        printf("The smallest is %d \n", b);
    else    
        printf("The smallest is %d \n ",d);
     
    return 0;
}
