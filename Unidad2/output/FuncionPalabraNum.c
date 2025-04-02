#include <stdio.h>

void numpalabra(int numero) {
    switch (numero) {
        case 1:
            printf("1 = fortnite\n");
            break;
        case 2:
            printf("2 = fut\n");
            break;
        case 3:
            printf("3 = perro\n");
            break;
        case 4:
            printf("4 = mata\n");
            break;
        case 5:
            printf("5 = roto\n");
            break;
        case 6:
            printf("6 = kosako\n");
            break;
        case 7:
            printf("7 = karat\n");
            break;
        case 8:
            printf("8 = vape\n");
            break;
        case 9:
            printf("9 = ziu\n");
            break;
        default:
            printf("Número fuera de rango. Solo del 1 al 9.\n");
    }
}

int main() {
    int num;

    printf("Dame un número del 1 al 9: ");
    scanf("%d", &num);

    numpalabra(num);

    return 0;
}
