#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int MATRIX_WIDTH = 9;

int MATRIX_HEIGHT = 5;

size_t MATRIX_WIDHT = 5;

void removeColumnA(int **matrix, int col);

int main() {
    int A[5][9];
    int temp_gc;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 9; ++j) {
            A[i][j] = 0;
        }
    }
    printf("%d",temp_gc);
    temp_gc = temp_gc - 10;
    printf("%d",temp_gc);
    A[0][8]  = temp_gc;

    A[0][0] = 0;
    A[1][0] = 0;
    A[2][0] = 0;
    A[3][0] = 0;
    A[4][0] = 0;

    A[0][1] = 0;
    A[1][1] = 0;
    A[2][1] = 0;
    A[3][1] = 0;
    A[4][1] = 0;


    A[0][2] = 3;
    A[1][2] = 4;
    A[2][2] = 5;
    A[3][2] = 6;
    A[4][2] = 7;



    A[0][3] = 3;
    A[1][3] = 4;
    A[2][3] = 5;
    A[3][3] = 6;
    A[4][3] = 7;
    //removeColumnA(A,0);


    printf("\n");
    printf("\n");

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 9; ++j) {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");

}

void removeColumnA(int **matrix, int col) {
    MATRIX_WIDTH--;
    //TODO check for empty matrix etc;
    for (int i = 0; i < MATRIX_HEIGHT; i++) {
        while (col < MATRIX_WIDTH) {
            //move data to the left
            matrix[i][col] = matrix[i][col + 1];
            col++;
        }
        matrix[i] = realloc(matrix[i], sizeof(double) * MATRIX_WIDHT);
    }
}

/*
void removeColumn(int **matrix, int col) {
    MATRIX_WIDTH--;
    //TODO check for empty matrix etc;
    for (int i = 0; i < MATRIX_HEIGHT; i++) {
        while (col < MATRIX_WIDTH) {
            //move data to the left
            matrix[i][col] = matrix[i][col + 1];
            col++;
        }
        matrix[i] = realloc(matrix[i], sizeof(double) * MATRIX_WIDHT);
    }
}*/
