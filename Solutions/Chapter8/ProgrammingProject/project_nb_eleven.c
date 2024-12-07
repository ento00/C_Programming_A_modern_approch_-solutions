#include <stdio.h>

#define MAX_SIZE 15

int main(void)
{
    char ch[15];
    int i = 0;


    printf("Enter a phone number: ");
    while ((ch[i] = getchar()) != '\n' && i < MAX_SIZE)
    {
        switch (ch[i])
        {
            case 'A': case 'B': case 'C':
                ch[i] = '2';
                break;
            case 'D': case 'E': case 'F':
                ch[i] = '3';
                break;
            case 'G': case 'H': case 'I':
                ch[i] = '4';
                break;
            case 'J': case 'K': case 'L':
                ch[i] = '5';
                break;
            case 'M': case 'N': case 'O':
                ch[i] = '6';
                break;
            case 'P': case 'R': case 'S':
                ch[i] = '7';
                break;
            case 'T': case 'U': case 'V':
                ch[i] = '8';
                break;
            case 'W': case 'X': case 'z':
                ch[i] = '9';
                break;
        }
        i++;
    }

    for(int j = 0; j < i; j++)
        printf("%c", ch[j]);

    return 0;
}