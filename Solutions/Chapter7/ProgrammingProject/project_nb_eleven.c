#include <stdio.h>

int main(void)
{
    char first_character, current_character;
    printf("Enter a first and last name: ");
    scanf(" %c", &first_character);

    while (1)
    {
        current_character = getchar();
        if (current_character == '\n')
        {
            printf("Error: no last name entered\n");
            return 1;
        }
        else
            if (current_character == ' ')
                break;
    }

    while ((current_character = getchar()) != '\n')
    {
        if (current_character != ' ')
                putchar(current_character);
    }

    printf(", %c", first_character);
    return 0;
}