#include <stdio.h>
#define FILAS 3
#define COLUMNAS 3

int main(){
    
    char matriz[FILAS][COLUMNAS][10]; 

    
    printf("Introduce tus palabras: \n");
    for(int i = 0; i < FILAS; i++){
        for(int j = 0; j < COLUMNAS; j++){
            printf("Introduce la palaba en la posi: [%d][%d]: ", i, j);
            scanf("%9s", matriz[i][j]); 
        }
    }

    printf("Recorriendo la matriz:\n");
    for(int i = 0; i < FILAS; i++){
        for(int j = 0; j < COLUMNAS; j++){
            printf("| %-10s |", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
