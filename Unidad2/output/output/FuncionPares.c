#include <stdio.h>

void pares(int numero) {
    printf("Numeros pares del 0 al %d:\n", numero);
    for (int i = 0; i <= numero; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int num;

    printf("Dame un numero: ");
    scanf("%d", &num);

    pares(num);

    return 0;
}
