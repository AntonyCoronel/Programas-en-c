#include <stdio.h>

void llenarMatriz(int matriz[3][3]) {
    printf("Ingresa los nums:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Num [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void transponerMatriz(int matriz[3][3], int transpuesta[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }
}

int main() {
    int matriz[3][3];
    int transpuesta[3][3];

    llenarMatriz(matriz);
    transponerMatriz(matriz, transpuesta);

    printf("\nMatriz ingresada:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz transpuesta:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", transpuesta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
