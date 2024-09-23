#include <stdio.h>

#define MAX 10  
void inputMatrix(int matrix[MAX][MAX], int rows, int cols) 
{
    printf("Enter elements for the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            scanf("%d", &matrix[i][j]);
        }
    }
}


void printMatrix(int matrix[MAX][MAX], int rows, int cols)
{
    printf("Matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int a[MAX][MAX], int b[MAX][MAX], int result[MAX][MAX], int rows, int cols) 
{
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}


void subtractMatrices(int a[MAX][MAX], int b[MAX][MAX], int result[MAX][MAX], int rows, int cols) 
{
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            result[i][j] = a[i][j] - b[i][j];
        }
    }
}


void multiplyMatrices(int a[MAX][MAX], int b[MAX][MAX], int result[MAX][MAX], int rowsA, int colsA, int colsB) 
{
    for (int i = 0; i < rowsA; i++) 
	{
        for (int j = 0; j < colsB; j++) 
		{
            result[i][j] = 0;
            for (int k = 0; k < colsA; k++) 
			{
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int rowsA, colsA, rowsB, colsB;
    int matrixA[MAX][MAX], matrixB[MAX][MAX], result[MAX][MAX];
    

    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &rowsA, &colsA);
    
    
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &rowsB, &colsB);
    
    
    if (rowsA != rowsB || colsA != colsB) 
	{
        printf("Error: Matrices must be of the same dimensions for addition and subtraction.\n");
        return 1;
    }
    
    if (colsA != rowsB) 
	{
        printf("Error: Number of columns of first matrix must be equal to number of rows of second matrix for multiplication.\n");
        return 1;
    }

    
    printf("Matrix A:\n");
    inputMatrix(matrixA, rowsA, colsA);
    printMatrix(matrixA, rowsA, colsA);
    
    
    printf("Matrix B:\n");
    inputMatrix(matrixB, rowsB, colsB);
    printMatrix(matrixB, rowsB, colsB);
    

    addMatrices(matrixA, matrixB, result, rowsA, colsA);
    printf("Matrix A + Matrix B:\n");
    printMatrix(result, rowsA, colsA);
    
    
    subtractMatrices(matrixA, matrixB, result, rowsA, colsA);
    printf("Matrix A - Matrix B:\n");
    printMatrix(result, rowsA, colsA);
    
    
    int resultMult[MAX][MAX];
    multiplyMatrices(matrixA, matrixB, resultMult, rowsA, colsA, colsB);
    printf("Matrix A * Matrix B:\n");
    printMatrix(resultMult, rowsA, colsB);
    
    return 0;
}

