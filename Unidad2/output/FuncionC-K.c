#include <stdio.h>

void cak(float celsius) {
    float kelvin = celsius + 273.15;
    printf("%.2f grados Celsius son %.2f grados Kelvin.\n", celsius, kelvin);
}

int main() {
    float grados;

    printf("Dame una temperatura en grados Celsius: ");
    scanf("%f", &grados);

    cak(grados);

    return 0;
}
