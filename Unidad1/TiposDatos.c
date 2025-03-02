#include <stdio.h>
int main(){
    char letra='a';
    int entero=10;
    unsigned postivio=4;
    short intcorto=-24;
    long intlargo=124123124;
    float decimalcorto=6.324;
    double decimallargo=35.342532423;
    char nombre[]="Antonio Coronel";

    printf("Letra: %c\n", letra);
    printf("Entero: %d\n", entero);
    printf("Unsigned positivo: %u\n", postivio);
    printf("Short int corto: %hd\n", intcorto);
    printf("Long int largo: %ld\n", intlargo);
    printf("Float decimal corto: %f\n", decimalcorto);
    printf("Double decimal largo: %lf\n", decimallargo);
    printf("Nombre: %s\n", nombre);
    return 0;
}