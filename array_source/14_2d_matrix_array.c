#include <stdio.h>

#define ROWS 3
#define COLS 3

// Function to input values into a matrix
void inputMatrix(int matrix[ROWS][COLS]) {
    printf("Enter the elements of the matrix (%d x %d):\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) 
	{
        for (int j = 0; j < COLS; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);	
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[ROWS][COLS]) {
    printf("Matrix (%d x %d):\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices
void addMatrices(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

int main() {
    int matrix1[ROWS][COLS], matrix2[ROWS][COLS], result[ROWS][COLS];

    // Input values for the first matrix
    printf("Input for the first matrix:\n");
    inputMatrix(matrix1);

    // Input values for the second matrix
    printf("\nInput for the second matrix:\n");
    inputMatrix(matrix2);

    // Display the first matrix
    printf("\nFirst Matrix:\n");
    displayMatrix(matrix1);

    // Display the second matrix
    printf("\nSecond Matrix:\n");
    displayMatrix(matrix2);

    // Add the two matrices
    addMatrices(matrix1, matrix2, result);

    // Display the result of the matrix addition
    printf("\nResult of Matrix Addition:\n");
    displayMatrix(result);

    return 0;
}

