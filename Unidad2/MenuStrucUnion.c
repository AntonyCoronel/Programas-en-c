#include <stdio.h>
#include <string.h>

#define FILAS 2  
#define COLUMNAS 2

typedef struct {
    char nombre[50];
    char raza[50];
} Animal;

typedef union {
    Animal animal;
} Dato;

typedef struct {
    Dato valor;
    int tipo; 
} Celda;

int main() {
    Celda matriz[FILAS][COLUMNAS];

    printf("Ingresa los datos para la matriz de animales:\n");

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("\nCelda [%d][%d]:\n", i, j);
            printf("Tipo de animal (1 = Perro, 2 = Gato): ");
            scanf("%d", &matriz[i][j].tipo);

            switch (matriz[i][j].tipo) {
                case 1:
                    printf("Ingresaste un Perro.\n");
                    printf("Nombre: ");
                    scanf("%s", matriz[i][j].valor.animal.nombre);

                    printf("Raza: ");
                    scanf("%s", matriz[i][j].valor.animal.raza);
                    break;

                case 2:
                    printf("Ingresaste un Gato.\n");
                    printf("Nombre: ");
                    scanf("%s", matriz[i][j].valor.animal.nombre);

                    printf("Raza: ");
                    scanf("%s", matriz[i][j].valor.animal.raza);
                    break;

                default:
                    printf("Tipo no válido. Se dejará vacío.\n");
                    break;
            }
        }
    }


    printf("\nMostrando la matriz de animales:\n");
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("Celda [%d][%d]: ", i, j);
            if (matriz[i][j].tipo == 1) {
                printf("Perro - Nombre: %s, Raza: %s\n", 
                    matriz[i][j].valor.animal.nombre, 
                    matriz[i][j].valor.animal.raza);
            } else if (matriz[i][j].tipo == 2) {
                printf("Gato - Nombre: %s, Raza: %s\n", 
                    matriz[i][j].valor.animal.nombre, 
                    matriz[i][j].valor.animal.raza);
            } else {
                printf("No se ingresó un animal válido.\n");
            }
        }
    }

    return 0;
}
