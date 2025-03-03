#include<stdio.h>
int main() { 
    int num1, num2, opc;
    float operacion;
    
    printf("Dame tu primer numero:\n");
    scanf("%d", &num1);
    
    printf("Dame tu segundo numero:\n");
    scanf("%d", &num2);
    
    printf("Seleccione una opcion:\n");
    printf("1._ Sumar\n");
    printf("2._ Restar\n");
    printf("3._ Multiplicar\n");
    printf("4._ Division\n");
    scanf("%d", &opc);
    
    switch (opc) {
        case 1:
            printf("Se ha seleccionado suma\n");
            operacion = num1 + num2;
            printf("Su resultado es: %.2f\n", operacion);
            break;
        
        case 2:
            printf("Se ha seleccionado resta\n");
            operacion = num1 - num2;
            printf("Su resultado es: %.2f\n", operacion);
            break;
        
        case 3:
            printf("Se ha seleccionado multiplicacion\n");
            operacion = num1 * num2;
            printf("Su resultado es: %.2f\n", operacion);
            break;
        
        case 4:
            printf("Se ha seleccionado division\n");
            if (num2 != 0) {
                operacion = (float)num1 / num2;
                printf("Su resultado es: %.2f\n", operacion);
            } else {
                printf("Error: No se puede dividir entre cero.\n");
            }
            break;
        
        default:
            printf("No ha seleccionado una opcion valida\n");
            break;
    }
    
    return 0;
}