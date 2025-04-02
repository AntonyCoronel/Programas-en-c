#include <stdio.h>

void impares(int numero) {
    printf("Numeros impares del 0 al %d:\n", numero);
    for (int i = 0; i <= numero; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int num;

    printf("Dame un numero: ");
    scanf("%d", &num);

    impares(num);

    return 0;
}
