#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int counter = 0;
    char ch;

    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n')
        switch (toupper(ch))
        {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                counter++;
                break;
        }
    printf("Your sentence contains %d wovels", counter);

    return 0;
}