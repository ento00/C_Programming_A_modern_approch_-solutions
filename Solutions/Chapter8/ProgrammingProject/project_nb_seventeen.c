#include<stdio.h>


int main(int argc, char const *argv[])
{
    int size, row, column;

    printf("This program creates a magic square of a specif size. \n The size must be an odd number between 1 and 99\n");
    printf("Enter the size of magic square: ");
    scanf("%d", &size);

    int matrix[size][size];
    
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            matrix[i][j] = 0;

    row = 0;
    column = (size / 2);
    matrix[row][column] = 1;


    // Compute the magic square 
    for(int i = 2; i <= size * size; i++)
    {   
        if (row == 0)
            row = size - 1;
        else
            row -= 1;
        if (column == size - 1)
            column = 0;
        else
            column += 1;
        if (matrix[row][column] != 0)
        {
            row = (row + 2) % size; 
            column = (column + size - 1) % size;

        }
        matrix[row][column] = i;
    }

    // print the magic square
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            printf("%3d ", matrix[i][j]);
        printf("\n");
    }

    return 0;
}
