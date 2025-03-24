#include <stdio.h>
struct Direccion
{
    char codigo[50];
    int id;
};

struct Persona
{
    char nombre[50];
    struct Direccion modelo;
    char marca[50];
    float peso;
    int plazas;
    int caballos;
    float velocidad;
    char ensamblador[50];
    float precio;
    char color[50];
    int stock;
};

int main(){
    int n;
    printf("Ingrese el número de carros: ");
    scanf("%d",&n);
    getchar();

    struct Persona personas[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nIngrese los datos del carro %d: \n",i+1);

        printf("Nombre del carro: ");
        scanf("%s",personas[i].nombre);
        printf("Codigo: ");
        scanf("%s",personas[i].modelo.codigo);
        printf("Id: ");
        scanf("%d",&personas[i].modelo.id);

        printf("Marca del carro: ");
        scanf("%s",personas[i].marca);
        printf("Peso: ");
        scanf("%f",&personas[i].peso);
        printf("Plazas: ");
        scanf("%d",&personas[i].plazas);
        printf("Caballos: ");
        scanf("%d",&personas[i].caballos);
        printf("Velocidad maxima: ");
        scanf("%f",&personas[i].velocidad);
        printf("Ensamblador del carro: ");
        scanf("%s",personas[i].ensamblador);
        printf("Precio: ");
        scanf("%f",&personas[i].precio);
        printf("Color del carro: ");
        scanf("%s",personas[i].color);
        printf("Stock: ");
        scanf("%d",&personas[i].stock);
    }
    
    printf("\n%-15s | %-10s | %-8s | %-15s | %-8s | %-6s | %-8s | %-8s | %-15s | %-15s | %-10s | %-5s\n",
        "Nombre", "Codigo", "ID", "Marca", "Peso", "Plazas", "Caballos", "Velocidad", "Ensamblador", "Precio", "Color", "Stock");
 printf("------------------------------------------------------------------------------------------------------------------------------------------------\n");

 for (int i = 0; i < n; i++)
 {
     printf("%-15s | %-10s | %-8d | %-15s | %-8.2f | %-6d | %-8d | %-8.2f | %-15s | %-15.2f | %-10s | %-5d\n",
            personas[i].nombre, personas[i].modelo.codigo, personas[i].modelo.id, personas[i].marca, 
            personas[i].peso, personas[i].plazas, personas[i].caballos, personas[i].velocidad,
            personas[i].ensamblador, personas[i].precio, personas[i].color, personas[i].stock);
 }

 return 0;
}
