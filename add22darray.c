#include <stdio.h>

#define ROWS 3
#define COLS 3

void printMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int firstMatrix[ROWS][COLS], int secondMatrix[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
        }
    }
}

void multiplyMatrices(int firstMatrix[ROWS][COLS], int secondMatrix[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = 0; // Initialize the result matrix element to 0
            for (int k = 0; k < COLS; k++) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

int main() {
    int firstMatrix[ROWS][COLS];
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            firstMatrix
        }
    }
    int secondMatrix[ROWS][COLS];

    int sum[ROWS][COLS];
    int product[ROWS][COLS];

    addMatrices(firstMatrix, secondMatrix, sum);
    multiplyMatrices(firstMatrix, secondMatrix, product);

    printf("Sum of the matrices:\n");
    printMatrix(sum);

    printf("Product of the matrices:\n");
    printMatrix(product);

    return 0;
}
