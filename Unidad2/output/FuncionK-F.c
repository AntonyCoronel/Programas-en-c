#include <stdio.h>

void kafrio(float kelvin) {
    float fahrenheit = (kelvin - 273.15) * 9 / 5 + 32;
    printf("%.2f grados Kelvin son %.2f grados Fahrenheit.\n", kelvin, fahrenheit);
}

int main() {
    float grados;

    printf("Dame una temperatura en grados Kelvin: ");
    scanf("%f", &grados);

    kafrio(grados);

    return 0;
}
