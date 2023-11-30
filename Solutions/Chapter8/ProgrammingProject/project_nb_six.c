#include<stdio.h>
#include<ctype.h>

#define MAX_SIZE 100

int main(int argc, char const *argv[])
{
    char message[MAX_SIZE];
    int msg_lenght = 0;

    printf("Enter message: ");
    for(; msg_lenght < MAX_SIZE && (message[msg_lenght] = toupper(getchar())) != '\n'; ++msg_lenght);
    
    
    for(int j = 0; j < msg_lenght; j++)
    {
        switch (message[j])
        {
            case 'A':
                putchar('4');
                break;
            case 'B':
                putchar('8');
                break;
            case 'E':
                putchar('3');
                break;
            case 'I':
                putchar('1');
                break;
            case 'O':
                putchar('0');
                break;
                
            case 'S':
                putchar('5');
                break;
            default:
                putchar(message[j]);
                break;
        }
    }
     printf("!!!!!!!!!!");
    

    return 0;
}

