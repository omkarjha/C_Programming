#include <stdio.h>

struct Element
{
    int values[100][100];
    int rows;
    int cols;
};

// Function to print the values in the array
void printArray(struct Element *element)
{
    for (int i = 0; i < element->rows; ++i)
    {
        for (int j = 0; j < element->cols; ++j)
        {
            printf("%d ", element->values[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    struct Element arr;

    printf("Enter the number of rows: ");
    scanf("%d", &arr.rows);

    printf("Enter the number of columns: ");
    scanf("%d", &arr.cols);

    // Input values for the array
    for (int i = 0; i < arr.rows; ++i)
    {
        for (int j = 0; j < arr.cols; ++j)
        {
            printf("Enter value for element (%d, %d): ", i, j);
            scanf("%d", &arr.values[i][j]);
        }
    }

    printArray(&arr);

    return 0;
}
