#include <stdio.h>

void negaposi(int numero) {
    if (numero > 0) {
        printf("El numero es positivo.\n");
    } else if (numero < 0) {
        printf("El numero es negativo.\n");
    } else {
        printf("El numero es cero.\n");
    }
}

int main() {
    int num;
    
    printf("Dame un num: ");
    scanf("%d", &num);

    negaposi(num);

    return 0;
}
