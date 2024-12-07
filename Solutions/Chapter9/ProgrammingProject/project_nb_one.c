#include<stdio.h>

void selection_sort(int leght, int array[*]);
void swap(int array[], int initial_position, int swap_position);
int find_index_max(int lenght, int array[*]);

int main(int argc, char const *argv[])
{
    int size;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &size);

    int array[size];

    printf("Enter numbers:");
    for(int i = 0; i < size; i++)
        scanf("%d", &array[i]);

    selection_sort(size, array);

    printf("function output: ");
    for(int i = 0; i < size; i++)
        printf("%d ", array[i]);

    return 0;
}

void swap(int array[], int initial_position, int swap_position)
{
    int app;

    app = array[initial_position];
    array[initial_position] = array[swap_position];
    array[swap_position] = app;
}

int find_index_max(int lenght, int array[lenght])
{
    int max = -1, index = 0;
    for(int i = 0; i < lenght; i++)
        if (max < array[i])
        {
            index = i;
            max = array[i];
        } 
    return index;    
}   

void selection_sort(int len, int array[len])
{
    if (!len)
        return;
        
    int index = find_index_max(len , array);
    swap(array, index, len-1);
    selection_sort(len - 1, array);
}
