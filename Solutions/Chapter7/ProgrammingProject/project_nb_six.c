#include<stdio.h>

int main(void)
{

    /*
     * Since the type of a sizeof expression may vary from one implementation to another,
     * it's necessary in C89 to cast sizeof expressions to a known type before printing them.
     * The sizes of the basic types are small numbers, so it's safe to cast them to int.
     * (In general, however, it's best to cast sizeof expressions to unsigned long and print them
     * using %lu.) In C99, we can avoid the cast by using the %zu conversion specification.
     * */
    printf("short = %zu bytes\n", sizeof(short));
    printf("int = %zu bytes\n", sizeof(int));
    printf("long = %zu bytes\n", sizeof(long));
    printf("float = %zu bytes\n", sizeof(float));
    printf("double = %zu bytes\n", sizeof(double));
    printf("long double = %zu bytes\n", sizeof(long double));
    
    return 0;
}