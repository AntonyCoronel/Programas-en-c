#include <stdio.h>
#include <math.h>

struct Coordenada {
    int x;
    int y;
};

int main() {
    int opc;
    printf("Seleccione una opcion\n");
    printf("1._Cuadrado\n");
    printf("2._Triangulo\n");
    scanf("%d", &opc);

    switch (opc) {
        case 1: {
            struct Coordenada arreglo[4];
            for (int i = 0; i < 4; i++) {
                int posicion = i + 1;
                printf("Ingresa coordenada x%d: ", posicion);
                scanf("%d", &arreglo[i].x);
                printf("Ingrese la coordenada y%d: ", posicion);
                scanf("%d", &arreglo[i].y);
            }

            float ab = sqrt(pow(arreglo[1].x - arreglo[0].x, 2) + pow(arreglo[1].y - arreglo[0].y, 2));
            float bc = sqrt(pow(arreglo[2].x - arreglo[1].x, 2) + pow(arreglo[2].y - arreglo[1].y, 2));
            float dc = sqrt(pow(arreglo[3].x - arreglo[2].x, 2) + pow(arreglo[3].y - arreglo[2].y, 2));
            float ad = sqrt(pow(arreglo[0].x - arreglo[3].x, 2) + pow(arreglo[0].y - arreglo[3].y, 2));

            float perimetro = ab + bc + dc + ad;
            float area = bc * ad;  

            printf("Perimetro total: %.2f\n", perimetro);
            printf("Area: %.2f\n", area);
            break;
        }

        case 2: {
            struct Coordenada arreglo2[3];
            for (int i = 0; i < 3; i++) {
                int posicion = i + 1;
                printf("Ingresa coordenada x%d: ", posicion);
                scanf("%d", &arreglo2[i].x);
                printf("Ingrese la coordenada y%d: ", posicion);
                scanf("%d", &arreglo2[i].y);
            }

            float ac = sqrt(pow(arreglo2[1].x - arreglo2[0].x, 2) + pow(arreglo2[1].y - arreglo2[0].y, 2));
            float cd = sqrt(pow(arreglo2[2].x - arreglo2[1].x, 2) + pow(arreglo2[2].y - arreglo2[1].y, 2));
            float ad = sqrt(pow(arreglo2[2].x - arreglo2[0].x, 2) + pow(arreglo2[2].y - arreglo2[0].y, 2));

            float perimetro = ac + cd + ad;
            float s = perimetro / 2;  
            float area = sqrt(s * (s - ac) * (s - cd) * (s - ad));  

            printf("Perimetro total: %.2f\n", perimetro);
            printf("Area: %.2f\n", area);
            break;
        }

        default:
            printf("Opcion no valida.\n");
            break;
    }
    return 0;
}
