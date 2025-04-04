#include <stdio.h>

void ingresarNumeros(int matriz[3][3]) {
    printf("Ingresa los num para la matris 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Num [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void procesarVector(int matriz[3][3]) {
    int vector[3];
    int resultado[3] = {0, 0, 0};

    printf("\nIngresa los valores del vector:\n");
    for (int i = 0; i < 3; i++) {
        printf("Vector[%d]: ", i);
        scanf("%d", &vector[i]);
    }

    for (int i = 0; i < 3; i++) {
        resultado[i] = 0;
        for (int j = 0; j < 3; j++) {
            resultado[i] += matriz[i][j] * vector[j];
        }
    }


    printf("\nResultado de la mutli:\n");
    for (int i = 0; i < 3; i++) {
        printf("Resultado[%d] = %d\n", i, resultado[i]);
    }
}

int main() {
    int matriz[3][3];

    ingresarNumeros(matriz);
    procesarVector(matriz);

    return 0;
}
