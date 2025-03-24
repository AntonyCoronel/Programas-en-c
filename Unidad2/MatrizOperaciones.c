#include <stdio.h>

#define FILAS 3
#define COLUMNAS 2  

int main() {
    float matriz[FILAS][COLUMNAS];  

    float suma[FILAS], resta[FILAS], multi[FILAS], divi[FILAS];


    printf("Introduce tus numeros: \n");
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("Introduce el num en la posi [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }



    for (int i = 0; i < FILAS; i++) {
        suma[i] = matriz[i][0] + matriz[i][1];
        resta[i] = matriz[i][0] - matriz[i][1];
        multi[i] = matriz[i][0] * matriz[i][1];
        divi[i] = matriz[i][0] / matriz[i][1] ; 
    }


    printf("\n| %-10s | %-10s | %-10s | %-10s | %-10s | %-10s |\n", "Val 1", "Val 2", "Suma", "Resta", "Multi", "Div");

    
    for (int i = 0; i < FILAS; i++) {
        printf("| %-10.2f | %-10.2f | %-10.2f | %-10.2f | %-10.2f | %-10.2f |\n", 
               matriz[i][0], matriz[i][1], suma[i], resta[i], multi[i], divi[i]);
    }

    return 0;
}
