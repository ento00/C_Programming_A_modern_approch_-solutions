#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>

#define N_WORD 26

void read_word(int counts[N_WORD]);
bool equal_array(int counts1[N_WORD], int counts2[N_WORD]);


int main(int argc, char const *argv[])
{
    int counter_word_one[N_WORD] = {0}, counter_word_two[N_WORD] = {0};


    printf("Enter first word: ");
    read_word(counter_word_one);
    printf("Enter second word: ");
    read_word(counter_word_two);    
    
    if(equal_array(counter_word_one, counter_word_two))
        printf("the two word are  anagrams");
    else
        printf("the two word are not anagrams");
    
    return 0;
}


void read_word(int counts[N_WORD])
{
    char ch;
    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
            counts[tolower(ch) - 'a']++;
    }
}

bool equal_array(int counts1[N_WORD], int counts2[N_WORD])
{
    for(int i = 0; i < N_WORD; i++)
        if (counts1[i] != counts2[i])
            return false;
    return true;
}