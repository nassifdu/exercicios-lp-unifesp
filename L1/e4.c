
// produto de matrizes

#include <stdio.h>

void lerMatriz(int m[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &m[i][j]);
}

void multiplicarMatrizes(int A[3][3], int B[3][3], int C[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 3; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
}

void imprimirMatriz(int m[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
}

int main() {
    int A[3][3], B[3][3], C[3][3];

    lerMatriz(A);
    lerMatriz(B);
    multiplicarMatrizes(A, B, C);
    imprimirMatriz(C);

    return 0;
}
