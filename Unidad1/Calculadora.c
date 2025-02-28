#include<stdio.h>
int main(){ 
    int num1,num2,opc;
    float operacion;
    printf("%s\n","Dame tu primer numero:");
    scanf("%d",&num1);
    printf("%s\n","Dame tu segundo numero:");
    scanf("%d",&num2);
    printf("%s\n","Seleccione una opcion:");
    printf("%s\n","1._Sumar");
    printf("%s\n","2._Restar");
    printf("%s\n","3._Multiplicacion");
    printf("%s\n","4._Division");
    scanf("%d",&opc);

    switch (opc)
    {
    case 1 :
    printf("%s\n","Se ha seleccionado suma");
    operacion=num1+num2;
    printf("Su resultado es %.2f\n", operacion);

        break;
    case 2:
    printf("%s\n","Se ha seleccionado resta");
    operacion=num1-num2;
    printf("%s%.2f\n","Su resultado es ",operacion);
        break;

        case 3:
    printf("%s\n","Se ha seleccionado multiplicacion");
    operacion=num1*num2;
    printf("%s%.2f\n","Su resultado es ",operacion);
        break;

        case 4:
    printf("%s\n","Se ha seleccionado division");
    operacion=num1/num2;
    printf("%s%.2f\n","Su resultado es ",operacion);
        break;

    default:
    printf("%s\n","No ha seleccionado una opcion valida");
    break;
    }
    return 0;
}