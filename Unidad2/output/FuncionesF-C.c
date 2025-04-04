#include <stdio.h>

void frio(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5 / 9;
    printf("%.2f grados Fahrenheit son %.2f grados Celsius.\n", fahrenheit, celsius);
}

int main() {
    float grados;

    printf("Dame una temperatura en grados Fahrenheit: ");
    scanf("%f", &grados);

    frio(grados);

    return 0;
}
