#include <stdio.h>

void pedirMatrices(int a[3][3], int b[3][3]) {
    printf("Ingresa matriz A:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nIngresa matriz B:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
}

void multiplicarMatrices(int a[3][3], int b[3][3], int res[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            res[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int matriz1[3][3];
    int matriz2[3][3];
    int resultado[3][3];

    pedirMatrices(matriz1, matriz2);
    multiplicarMatrices(matriz1, matriz2, resultado);

    printf("\nMatriz resultado (A x B):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}

