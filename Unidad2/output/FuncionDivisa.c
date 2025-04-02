#include <stdio.h>

void divisa(float dolares) {
    float tipoCambio = 20.10;
    float pesos = dolares * tipoCambio;
    printf("%.2f dólares son %.2f pesos mexicanos (a un tipo de cambio de %.2f).\n", dolares, pesos, tipoCambio);
}

int main() {
    float cantidad;

    printf("Dame la cantidad en dólares: ");
    scanf("%f", &cantidad);

    divisa(cantidad);

    return 0;
}
