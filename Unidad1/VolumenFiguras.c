#include <stdio.h>
int main() {
    double radio, altura, vEs,vCi,vCo;
    float pi=3.1416;
    
    printf("%s","Ingresa el radio: ");
    scanf("%lf", &radio);
    printf("Ingresa la altura: ");
    scanf("%lf", &altura);
    
    vEs = (4.0 / 3.0) * pi * radio * radio * radio;
    vCi = pi * radio * radio * altura;
    vCo = (1.0 / 3.0) * pi * radio * radio * altura;
    
    printf("\nVolumen de la esfera: %.2lf\n", vEs);
    printf("Volumen del cilindro: %.2lf\n", vCi);
    printf("Volumen del cono: %.2lf\n", vCo);
    
    return 0;}