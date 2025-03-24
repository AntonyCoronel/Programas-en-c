#include <stdio.h>
#define FILAS 6
#define COLUMNAS 6

int main() {
    int matriz[FILAS][COLUMNAS] = {
        {1,2,3,4,6,3},
        {4,5,6,6,4,2},
        {7,8,9,0,5,3},
        {1,2,3,4,6,3},
        {4,5,6,6,4,2},
        {7,8,9,0,5,3}
    };

    printf("Recorriendo la matriz:\n");

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {

            if (j % 2 == 0) { 
                printf("|%d ", matriz[i][j]);
            } else { 
                printf("|# ");
            }
        }
        printf("\n");
    }

    return 0;
}
