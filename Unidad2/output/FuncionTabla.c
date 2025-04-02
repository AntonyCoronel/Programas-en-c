#include <stdio.h>

void tabla(int numero) {
    printf("Tabla de multiplicar del %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}

int main() {
    int num;
    
    printf("Dame un num: ");
    scanf("%d", &num);

    tabla(num);

    return 0;
}
