#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num, d, r, m, n;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &d);

    if(!d)
        printf("Error: denominator can't be zero");
    else
    {
        m = num;
        n = d;
        while (n > 0)
        {   
            r = m%n;
            m = n; 
            n = r;
        }
        
        printf((d/m != 1) ? "In lowest terms: %d/%d\n" : "In lowest terms: %d\n", num/m, d/m);
    }

    return 0;
}
