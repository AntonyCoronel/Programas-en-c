#include <stdio.h>
//1
float potencia(float base, int exp) {
    float resultado = 1;
    for (int i = 0; i < exp; i++) {
        resultado =resultado*base;  
    }
    return resultado;
}
void imprimir(float resultado) {
    printf("\nResultados:\nEl resultado de tu operacin es: %.2f\n", resultado);
}

int main() {
    //1
    float a;
    int b;  
    printf("Dame tu num base: ");
    scanf("%f", &a);
    printf("Dame tu exponente ");
    scanf("%d", &b);
    float resultado = potencia(a, b);
    imprimir(resultado);

    return 0;
}


