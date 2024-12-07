#include<stdio.h>

#define SIZE 200


int main(int argc, char const *argv[])
{
    char msg[SIZE], punctuation;
    int sentence_lenght = 0, end_word, start_word;

    printf("Enter a sentence: ");
    while (sentence_lenght < SIZE && ((punctuation = getchar()) != '\n'))
    {
        if (punctuation == '!' || punctuation == '?' || punctuation == '.')        
            break;
        msg[sentence_lenght++] = punctuation;
    }
    

    end_word = start_word = sentence_lenght - 1;

    while (end_word >= 0 && start_word >= 0)
    {
        if ((start_word != 0 && msg[start_word - 1] == ' ') || start_word == 0)
        {
            for (int j = start_word; j <= end_word; j++)
                printf("%c", msg[j]);
            end_word = start_word - 2;
            if (end_word >= 0)
                printf(" ");
        }
        start_word--;
    }
    if (punctuation == '!' || punctuation == '?' || punctuation == '.')
        printf("%c", punctuation);

    
    return 0;
}
