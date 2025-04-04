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

void procesarMatrizYArreglo(int tam) {
    char matriz[100][100];
    char arreglo[10000];
    int pos = 0;

    printf("\n Llena %dx%d:\n", tam, tam);
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("Posición [%d][%d]: ", i, j);
            scanf(" %c", &matriz[i][j]); 
        }
    }

    printf("\nMatriz ingresada:\n");
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            arreglo[pos++] = matriz[i][j];
        }
    }

    printf("\nArreglo lineal:\n");
    for (int i = 0; i < pos; i++) {
        printf("%c ", arreglo[i]);
    }
    printf("\n");
}

int main() {
    int num, raiz;
    bool valido = false;

    while (!valido) {
        printf("Ingresa num con riaz excacta: ");
        scanf("%d", &num);

        valido = esRaizExacta(num, &raiz);
        if (!valido) {
            printf("No tiene raiz exacta.\n");
        }
    }

    procesarMatrizYArreglo(raiz);

    return 0;
}

