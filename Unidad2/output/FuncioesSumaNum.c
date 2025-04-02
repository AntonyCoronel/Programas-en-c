#include <stdio.h>

int suma(int a, int b) {
    int suma = 0;
    
    // Asegurar que a sea menor que b
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i <= b; i++) {
        suma += i;
    }

    return suma;
}

void imprimir(int resultado) {
    printf("La suma del rango es: %d\n", resultado);
}

int main() {
    int num1, num2;
    
    printf("Dame tu num 1: ");
    scanf("%d", &num1);
    
    printf("Dame tu num 2: ");
    scanf("%d", &num2);

    int resultado = suma(num1, num2);
    imprimir(resultado);

    return 0;
}
