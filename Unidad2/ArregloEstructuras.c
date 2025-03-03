#include <stdio.h>
struct Computadora
{
    char nombre[50];
    char marca[50];
    int id;
    float precio;
    int generacion;
    float peso;
    int stock;
    char grafica[50];
};

int main()
{

    int size;
    printf("Ingresa el tamaño de tu arreglo: ");
    scanf("%d", &size);
    struct Computadora arreglo[size];

    for (int i = 0; i < size; i++)
    {
        printf("\nIngrese los datos de la computadora %d:\n", i + 1);
        printf("Nombre: ");
        scanf("%s", arreglo[i].nombre);

        printf("Marca: ");
        scanf("%s", arreglo[i].marca);

        printf("ID: ");
        scanf("%d", &arreglo[i].id);

        printf("Precio: ");
        scanf("%f", &arreglo[i].precio);

        printf("Peso: ");
        scanf("%f", &arreglo[i].peso);

        printf("Generacion: ");
        scanf("%d", &arreglo[i].generacion);

        printf("Stock: ");
        scanf("%d", &arreglo[i].stock);

        printf("Gráfica: ");
        scanf("%s", arreglo[i].grafica);
    }

    printf("\nValores ingresados:\n");
    for (int i = 0; i < size; i++)
    {
        printf("\nComputadora %d:\n", i + 1);
        printf("Nombre: %s\n", arreglo[i].nombre);
        printf("Marca: %s\n", arreglo[i].marca);
        printf("Precio: %.2f\n", arreglo[i].precio);
        printf("Peso: %.2f kg\n", arreglo[i].peso);
        printf("Generacion: %d\n", arreglo[i].generacion);
        printf("Stock: %d unidades\n", arreglo[i].stock);
        printf("Gráfica: %s\n", arreglo[i].grafica);
    }

    return 0;
}
