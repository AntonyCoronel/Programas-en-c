#include <stdio.h>

#define TAM 3  

void llenarMatriz(int matriz[TAM][TAM]) {
    printf("\nLlena la matris 3x3:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("Posición [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatris ingresada:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void multiplicarMatrices(int A[TAM][TAM], int B[TAM][TAM], int resultado[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < TAM; k++) {
                resultado[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void copiarMatriz(int origen[TAM][TAM], int destino[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            destino[i][j] = origen[i][j];
        }
    }
}

void elevarMatriz(int matriz[TAM][TAM], int exponente) {
    int resultado[TAM][TAM];
    int temp[TAM][TAM];

    copiarMatriz(matriz, resultado);

    for (int e = 1; e < exponente; e++) {
        copiarMatriz(resultado, temp);
        multiplicarMatrices(temp, matriz, resultado);
    }

    printf("\nMatriz elevada a la %d:\n", exponente);
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[TAM][TAM];
    int exponente;

    llenarMatriz(matriz);

    printf("Ingesa tunum: ");
    scanf("%d", &exponente);

    if (exponente < 1) {
        printf("El exponente debe ser mayor o igual a 1.\n");
    } else {
        elevarMatriz(matriz, exponente);
    }

    return 0;
}
