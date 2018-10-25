#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int MATRIX_WIDTH = 9;

int MATRIX_HEIGHT = 5;

size_t MATRIX_WIDHT = 5;

void removeColumnA(float **matrix, int col);

void removeColumnMy(size_t rows, size_t columns, float matrix[rows][columns],int col);

int main() {
    float A[5][9];


    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 9; ++j) {
            A[i][j] = 0;
        }
    }

    //birinci düğüm
    A[0][4] = 1;
    A[0][5] = -1;
    A[0][8] = -40;

    //ikinci düğüm

    A[1][5] = 1;
    A[1][8] = 50;


    //üçüncü düğüm

    A[2][3] = 1;
    A[2][8] = 80;

    //dördüncü düğüm

    A[3][4] = 1;
    A[3][8] = 10;


    //giriş - çıkış

    A[4][3] = 1;
    A[4][8] = 80;



    //removeColumnA(A,0);


    printf("\n");
    printf("\n");

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 9; ++j) {
            printf("%.2f  ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    float *ip1 = &A;
    
    //removeColumnMy( 5,9 , A, 0);
    //removeColumnA(ip1,0);

    int q,w,k,n=5;
    float c;
    for(w=1; w<=8; w++)
    {

        for(q=1; q<=n; q++)
        {
            if(q!=w)
            {
                c=A[q][w]/A[w][w];
                for(k=1; k<=n+1; k++)
                {
                    A[q][k]=A[q][k]-c*A[w][k];
                }
            }
        }
    }





    /*printf("\n");
    printf("\n");

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 9; ++j) {
            printf("%.2f  ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");*/


}

void removeColumnMy(size_t rows, size_t columns, float matrix[rows][columns], int colNum) {
    MATRIX_WIDTH--;
    float A[rows][columns-1];

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 8; ++j) {
            A[i][j] = 0;
        }
    }
    /*for (int i = 0; i < columns; ++i) {
        for (int j = 0; j < rows; ++j) {
            if (i == colNum) {
                continue;
            } else {
                if (j == 0) {

                } else {
                    A[i][j] = matrix[i][j];
                }
            }
        }
    }*/
    int temp = colNum;
    //TODO check for empty matrix etc;
    for (int i = 0; i < MATRIX_HEIGHT; i++) {
        colNum = temp;
        while (colNum < MATRIX_WIDTH) {
            //move data to the left
            A[i][colNum] = matrix[i][colNum + 1];
            colNum++;
        }
        //matrix[i] = realloc(matrix[i], sizeof(double) * MATRIX_WIDHT);
        //A[i] = matrix[i];
        /*for (int j = 0; j < MATRIX_WIDHT; ++j) {
            A[i][j] = matrix[i][j];
        }*/
    }
    printf("\n");
    printf("\n");

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 8; ++j) {
            printf("%.2f  ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
}

void removeColumnA(float **matrix, int col) {
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
