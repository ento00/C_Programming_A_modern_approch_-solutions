#include<stdio.h>

int main(int argc, char const *argv[])
{
    int prefix, group, publisher, item, check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &group, &publisher, &item, &check_digit);


    printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n",
        prefix, group, publisher, item, check_digit);


    return 0;
}
