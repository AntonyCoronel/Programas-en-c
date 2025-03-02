#include <stdio.h>

int main() {
    float fahr=0, celsius;
    int step=20;

    while (fahr <= 300) {
        celsius =(5.0/9.0)*(fahr-32.0); 
        printf("%.2f %.2f\n",fahr,celsius);
        fahr = fahr + step;
    }
    return 0; 
    }