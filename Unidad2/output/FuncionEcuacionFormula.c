#include <stdio.h>
#include <math.h>

void formula_general(float a, float b, float c) {
    float discriminante = b * b - 4 * a * c;

    if (a == 0) {
        printf("No es una ecuación de segundo grado (a no puede ser 0).\n");
    } else if (discriminante > 0) {
        float x1 = (-b + sqrt(discriminante)) / (2 * a);
        float x2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("Soluciones reales diferentes:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    } else if (discriminante == 0) {
        float x = -b / (2 * a);
        printf("Solución real doble:\n");
        printf("x = %.2f\n", x);
    } else {
        float parteReal = -b / (2 * a);
        float parteImaginaria = sqrt(-discriminante) / (2 * a);
        printf("Soluciones complejas:\n");
        printf("x1 = %.2f + %.2fi\n", parteReal, parteImaginaria);
        printf("x2 = %.2f - %.2fi\n", parteReal, parteImaginaria);
    }
}

int main() {
    float a, b, c;

    printf("Resolver ecuación ax^2 + bx + c = 0\n");
    printf("Dame el valor de a: ");
    scanf("%f", &a);
    printf("Dame el valor de b: ");
    scanf("%f", &b);
    printf("Dame el valor de c: ");
    scanf("%f", &c);

    formula_general(a, b, c);

    return 0;
}