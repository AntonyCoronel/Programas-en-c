#include <stdio.h>
#define PI 3.1416
union Dato {
    float resultado;
};

// figuras 2D
float cuadrado(float lado) {
    return lado * lado;
}

float triangulo(float base, float altura) {
    return (base * altura) / 2;
}

float rectangulo(float base, float altura) {
    return base * altura;
}

float circulo(float radio) {
    return PI * radio * radio;
}

float trapecio(float base_mayor, float base_menor, float altura) {
    return ((base_mayor + base_menor) / 2) * altura;
}

//  figuras 3D
float cubo(float lado) {
    return lado * lado * lado;
}

float piramide(float base, float altura) {
    return (base * altura) / 3;
}

float caja_rectangular(float largo, float ancho, float altura) {
    return largo * ancho * altura;
}

float esfera(float radio) {
    return (4.0 / 3.0) * PI * radio * radio * radio;
}

float cono(float radio, float altura) {
    return (1.0 / 3.0) * PI * radio * radio * altura;
}


void imprimir(float resultado) {
    printf("\nResultado: %.2f\n", resultado);
}

int main() {
    int opc;
    union Dato figura[1]; 
    
    printf("\nElige la dimnsion de tu figura:");
    printf("\n1. Figuras 2D");
    printf("\n2. Figuras 3D");
    printf("\nOpc: ");
    scanf("%d", &opc);
    
    if (opc == 1) {
        printf("\nElige la figura 2D que deseas calcular su area:");
        printf("\n1. Cuadrado");
        printf("\n2. Triangulo");
        printf("\n3. Rectangulo");
        printf("\n4. Circulo");
        printf("\n5. Trapecio");
        printf("\nOpc: ");
        
        int opc2;
        scanf("%d", &opc2);
        
        switch (opc2) {
            case 1: {
                float lado;
                printf("\nIngrese el lado del cuadrado: ");
                scanf("%f", &lado);
                figura[0].resultado = cuadrado(lado);
                break;
            }
            case 2: {
                float base, altura;
                printf("\nIngrese la base del triangulo: ");
                scanf("%f", &base);
                printf("Ingrese la altura del tringulo: ");
                scanf("%f", &altura);
                figura[0].resultado = triangulo(base, altura);
                break;
            }
            case 3: {
                float base, altura;
                printf("\nIngrese la base del rectangulo: ");
                scanf("%f", &base);
                printf("Ingrese la altura del rectangulo: ");
                scanf("%f", &altura);
                figura[0].resultado = rectangulo(base, altura);
                break;
            }
            case 4: {
                float radio;
                printf("\nIngrese el radio del circulo: ");
                scanf("%f", &radio);
                figura[0].resultado = circulo(radio);
                break;
            }
            case 5: {
                float base_mayor, base_menor, altura;
                printf("\nIngrese la base mayor del trapecio: ");
                scanf("%f", &base_mayor);
                printf("Ingrese la base menor del trapecio: ");
                scanf("%f", &base_menor);
                printf("Ingrese la altura del trapecio: ");
                scanf("%f", &altura);
                figura[0].resultado = trapecio(base_mayor, base_menor, altura);
                break;
            }
            default:
                printf("\nOpción inválida\n");
                return 0;
        }
    }
    else if (opc == 2) {
        printf("\nElige la figura 3D que deseas calcular su volumen:");
        printf("\n1. Cubo");
        printf("\n2. Piramide");
        printf("\n3. Caja Rectangular");
        printf("\n4. Esfera");
        printf("\n5. Cono");
        printf("\nOpc: ");
        
        int opc3;
        scanf("%d", &opc3);
        
        switch (opc3) {
            case 1: {
                float lado;
                printf("\nIngrese el lado del cubo: ");
                scanf("%f", &lado);
                figura[0].resultado = cubo(lado);
                break;
            }
            case 2: {
                float base, altura;
                printf("\nIngrese la base de la piramide: ");
                scanf("%f", &base);
                printf("Ingrese la altura de la piramide: ");
                scanf("%f", &altura);
                figura[0].resultado = piramide(base, altura);
                break;
            }
            case 3: {
                float largo, ancho, altura;
                printf("\nIngrese el largo de la caja: ");
                scanf("%f", &largo);
                printf("Ingrese el ancho de la caja: ");
                scanf("%f", &ancho);
                printf("Ingrese la altura de la caja: ");
                scanf("%f", &altura);
                figura[0].resultado = caja_rectangular(largo, ancho, altura);
                break;
            }
            case 4: {
                float radio;
                printf("\nIngrese el radio de la esfera: ");
                scanf("%f", &radio);
                figura[0].resultado = esfera(radio);
                break;
            }
            case 5: {
                float radio, altura;
                printf("\nIngrese el radio del cono: ");
                scanf("%f", &radio);
                printf("Ingrese la altura del cono: ");
                scanf("%f", &altura);
                figura[0].resultado = cono(radio, altura);
                break;
            }
            default:
                printf("\nOpción inválida\n");
                return 0;
        }
    }
    else {
        printf("\nOpción inválida\n");
        return 0;
    }
    
    imprimir(figura[0].resultado);
    return 0;
}
