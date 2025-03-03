#include <stdio.h>
int main(){
    int opc;
    printf("%s\n","Seleccione una opcion");
    printf("%s\n","1._Sumar");
    printf("%s\n","2._Restar");
    printf("%d",&opc);
    switch (opc)
    {
    case 1:
    printf("%s\n","Ha seleccionado suma");
        break;

    case 2:
    printf("%s\n","Ha seleccionado resta");
    break;
    default:
    printf("%s\n","No ha seleccionado una opcion valida");
        break;
    }
    return 0;
}