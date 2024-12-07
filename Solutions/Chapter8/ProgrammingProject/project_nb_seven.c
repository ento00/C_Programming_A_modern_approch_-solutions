#include<stdio.h>

int main(int argc, char const *argv[])
{
    int matrix[5][5] = {0};
    int total_rows[5] = {0}, total_colomns[5] = {0};


    for (int i = 0; i < 5; i++)
    {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &matrix[i][j]);
            total_rows[i] += matrix[i][j];
            total_colomns[j] += matrix[i][j];
        }
    }
    
    printf("Row total: ");
    for(int i = 0; i < 5; i++)
        printf("%d ", total_rows[i]);
    
    printf("\nColumn total: ");
    for(int i = 0; i < 5; i++)
        printf("%d ", total_colomns[i]);
    

    return 0;
}
