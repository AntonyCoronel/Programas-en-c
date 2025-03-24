#include <stdio.h>
#define FILAS 2
#define COLUMNAS 2

struct Lap {
    int id;
    char nombre[20]; 
};

int main() {
    struct Lap matriz[FILAS][COLUMNAS] = {
        {{2, "DEL"}, {5, "HP"}},
        {{8, "Mac"}, {3, "Asus"}}
    };

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("| ID: %d, Nombre: %s ", matriz[i][j].id, matriz[i][j].nombre);
        }
        printf("|\n");
    }

    return 0;
}
