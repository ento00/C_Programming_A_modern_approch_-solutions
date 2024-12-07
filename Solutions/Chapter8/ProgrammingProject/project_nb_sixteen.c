#include<stdio.h>
#include<ctype.h>

#define N_WORD 26

int main(int argc, char const *argv[])
{
    int counter_word[N_WORD] = {0}, loop_variable = 0;
    char ch;

    printf("Enter first word: ");
    while ((ch = getchar()) != '\n')
    {
        //printf("%d ", tolower(ch) - 'a');
        if (isalpha(ch))
            counter_word[tolower(ch) - 'a']++;
    }

    printf("Enter second word: ");
    while ((ch = getchar()) != '\n')
        if (isalpha(ch))
            counter_word[tolower(ch) - 'a']--;
    
    for(; loop_variable< N_WORD; ++loop_variable)
        if (counter_word[loop_variable] != 0)
            break;

    if(loop_variable != N_WORD)
        printf("the two word are not anagrams");
    else
        printf("the two word are anagrams");
        
    return 0;
}
