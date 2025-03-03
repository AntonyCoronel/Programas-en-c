#include <stdio.h>
int main()
{
    int size;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &size);

    int arregloNumeros[size]; 

    for (int i = 0; i < size; i++)
    {
        printf("Ingrese valor en posicion [%d]: \n", i);
        int swap;
        scanf("%d", &swap);
        arregloNumeros[i] = swap; 
    }

    printf("\nValores ingresados:\n");
    for (int i = 0; i < size; i++)
    {
        printf("posicion[%d] = %d\n", i, arregloNumeros[i]);
    }

    return 0;
}