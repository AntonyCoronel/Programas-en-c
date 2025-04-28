#include <stdio.h>
#define MAX 7

const char* colores[] = {
    "\033[7;31m", 
    "\033[7;32m", 
    "\033[7;33m", 
    "\033[7;34m", 
    "\033[7;35m", 
    "\033[7;36m", 
    "\033[7;37m"
};
const char* reset = "\033[0m";

int main() {
    int n, i, j, max = 0;
    int valores[MAX];

    do {
        printf("Mete tu cantidad de val pero solo del 1 al 7: ");
        scanf("%d", &n);
    } while (n < 1 || n > MAX);

    for (i = 0; i < n; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
        if (valores[i] > max) {
            max = valores[i];
        }
    }
    printf("\n");

    
    printf("*");
    for (j = 0; j < n; j++) {
        printf("*****");  
    }
    printf("*\n");


    for (i = max; i >= 1; i--) {
        printf("*"); 
        for (j = 0; j < n; j++) {
            if (valores[j] >= i) {
                printf(" %s* *%s ", colores[j], reset);
            } else {
                printf("     ");
            }
        }
        printf("*\n"); 
    }

  
    printf("*");
    for (j = 0; j < n; j++) {
        printf("*****");
    }
    printf("*\n");

    return 0;
}
