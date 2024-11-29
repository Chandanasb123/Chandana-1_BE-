#include <stdio.h>

#define MAX 10 // Maximum size of the matrix

void readMatrix(int matrix[MAX][MAX], int rows, int cols) {
    printf("Enter elements of the matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }


void addMatrices(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    


int main() {
    int matrix1[MAX][MAX], matrix2[MAX][MAX], result[MAX][MAX];
    int rows, cols;

    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &rows, &cols);

    if (rows > MAX || cols > MAX) {
        printf("Error: Matrix size exceeds the limit (%dx%d).\n", MAX, MAX);
        return 1;
    }

    printf("\nMatrix 1:\n");
    readMatrix(matrix1, rows, cols);

    printf("\nMatrix 2:\n");
    readMatrix(matrix2, rows, cols);

    addMatrices(matrix1, matrix2, result, rows, cols);

    printf("\nSum of the matrices:\n");
    printMatrix(result, rows, cols);

    return 0;
}
