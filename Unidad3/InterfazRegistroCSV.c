#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}

void setColor(const char* color) {
    printf("%s", color);
}

void limpiarPantalla() {
    printf("\033[2J");
    gotoxy(0, 0);
}

void imprimirMarco() {
    printf("****************************************************\n");
    for (int j = 0; j < 20; j++) {
        printf("*                                                  *\n");
    }
    printf("****************************************************\n");
}

int main() {
    FILE *file;
    char nombre[MAX];
    int edad;
    char pais[MAX];
    char nombrearch[MAX];
    int cantidad, i;
    
    limpiarPantalla();
    imprimirMarco();

    setColor("\033[7;34m");
    gotoxy(5, 7);
    printf("Cuantas personas quieres registrar? ");
    gotoxy(40, 7);
    setColor("\033[7;35m");
    scanf("%d", &cantidad);
    getchar(); // Limpiar 
    printf("\033[0m");

    limpiarPantalla();
    imprimirMarco();

    setColor("\033[7;34m");
    gotoxy(5, 2);
    printf("Nombre de archivo (ej: salida.csv):");
    gotoxy(40, 2);
    setColor("\033[7;35m");
    scanf("%s", nombrearch);
    getchar();
    printf("\033[0m");

    file = fopen(nombrearch, "w");
    if (file == NULL) {
        perror("Error al crear el archivo");
        return 1;
    }

    limpiarPantalla();
    for (i = 0; i < cantidad; i++) {
        limpiarPantalla();
        imprimirMarco();

        setColor("\033[7;34m");
        gotoxy(5, 2);
        printf("Persona %d", i + 1);

        gotoxy(5, 4);
        printf("Nombre: ");
        gotoxy(5, 6);
        printf("Edad: ");
        gotoxy(5, 8);
        printf("Pais: ");

        setColor("\033[7;35m");
        gotoxy(20, 4);
        fgets(nombre, MAX, stdin);
        nombre[strcspn(nombre, "\n")] = 0; 

        gotoxy(20, 6);
        scanf("%d", &edad);
        getchar();

        gotoxy(20, 8);
        fgets(pais, MAX, stdin);
        pais[strcspn(pais, "\n")] = 0;

        fprintf(file, "%s,%d,%s\n", nombre, edad, pais);
        printf("\033[0m");
    }

    fclose(file);

    limpiarPantalla();
    imprimirMarco();
    setColor("\033[7;32m");
    gotoxy(5, 5);
    printf("Archivo creado correctamente");
    gotoxy(5, 7);
    printf("Presiona 1 para mostrar tabla");
    printf("\033[0m");

    int opcion;
    gotoxy(40, 7);
    scanf("%d", &opcion);
    getchar();

    if (opcion == 1) {
        limpiarPantalla();
        imprimirMarco();
        
        file = fopen(nombrearch, "r");
        if (file == NULL) {
            perror("Error al abrir el archivo para leer");
            return 1;
        }

        char linea[MAX];
        int num = 1;

        gotoxy(5, 2);
        printf("Num | Nombre               | Edad | Pais");
        gotoxy(5, 3);
        printf("------------------------------------------");

        int fila = 4;
        while (fgets(linea, sizeof(linea), file)) {
            char nombreL[MAX], paisL[MAX];
            int edadL;

            sscanf(linea, "%[^,],%d,%[^\n]", nombreL, &edadL, paisL);

            gotoxy(5, fila);
            printf("%-3d | %-20s | %-4d | %-10s\n", num, nombreL, edadL, paisL);
            printf("     ----------------------------------------");
            fila++;
            num++;
        }

        fclose(file);
    }

    return 0;
}
