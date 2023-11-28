#include<stdio.h>

int main(void)
{
    char ch;
    int counter_word = 1, length = 0;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n')
        if (ch != ' ')
            length++;
        else
            counter_word++;
    printf("Avarage word length: %.1f", (float) length / counter_word);


    return 0;
}