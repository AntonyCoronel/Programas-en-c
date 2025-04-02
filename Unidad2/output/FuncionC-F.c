#include <stdio.h>

void calor(float celsius) {
    float fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f grados Celsius son %.2f grados Fahrenheit.\n", celsius, fahrenheit);
}

int main() {
    float grados;

    printf("Dame una temperatura en grados Celsius: ");
    scanf("%f", &grados);

    calor(grados);

    return 0;
}
