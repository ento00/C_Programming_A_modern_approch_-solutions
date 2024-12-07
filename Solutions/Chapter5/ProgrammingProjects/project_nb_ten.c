#include<stdio.h>

int main(int argc, char const *argv[])
{
    int grade; 

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    if (grade > 100 || grade < 0)
        printf("Erro: invalid input");
    else 
        switch (grade / 10)
        {
            case 6:
                printf("Letter grade: D"); 
                break;
            case 7:
                printf("Letter grade: C"); 
                break;
            case 8:
                printf("Letter grade: B"); 
                break;
            case 9: case 10:
                printf("Letter grade: A");
                break;
            default:
                printf("Letter grade: F"); 
                break;
            }

    return 0;    
}
