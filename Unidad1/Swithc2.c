#include<stdint.h>
int main(){
    printf("%s\n","Selecciona una opcion");
    printf("%s\n","a)Seleccionar opc 1");
    printf("%s\n","b)Seleccionar opc 2");
    char opc;
    scanf("%c",&opc);
    switch (opc)
    {
    case 'a':
        printf("%s\n","Selecciono opc1");
        break;
    
    case 'b':
        printf("%s\n","Selecciono opc2");
        break;
    
    default:
        break;
    }
    return 0;
}