#include <stdio.h>
#include <stdbool.h>


bool esRaizExacta(int num, int* raiz) {
    for (int i = 1; i * i <= num; i++) {
        if (i * i == num) {
            *raiz = i;
            return true;
        }
    }
    return false;
}


void llenarMatriz(char matriz[][100], int tam) {
    printf("\nLlena la matriz %dx%d:\n", tam, tam);
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("Posición [%d][%d]: ", i, j);
            scanf(" %c", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(char matriz[][100], int tam) {
    printf("\nMatriz ingresada:\n");
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }
}

void convertirAMatrizLineal(char matriz[][100], char arreglo[], int tam, int* longitud) {
    int pos = 0;
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            arreglo[pos++] = matriz[i][j];
        }
    }
    *longitud = pos;
}


void imprimirArreglo(char arreglo[], int longitud) {
    printf("\nArreglo lineal:\n");
    for (int i = 0; i < longitud; i++) {
        printf("%c ", arreglo[i]);
    }
    printf("\n");
}

int main() {
    int num, raiz;
    bool valido = false;
    char matriz[100][100];
    char arreglo[10000];
    int longitud = 0;

    while (!valido) {
        printf("Ingresa tu num con riz exacta: ");
        scanf("%d", &num);

        valido = esRaizExacta(num, &raiz);
        if (!valido) {
            printf("No es exacta.\n");
        }
    }

    llenarMatriz(matriz, raiz);
    imprimirMatriz(matriz, raiz);
    convertirAMatrizLineal(matriz, arreglo, raiz, &longitud);
    imprimirArreglo(arreglo, longitud);

    return 0;
}
