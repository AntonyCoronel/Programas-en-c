#include<stdio.h>
int main(){
    float calf1=0,calf2=0,calf3=0;
    float promedio;
    printf("%s\n","Ingresa tu primera calificacion: ");
    scanf("%f",&calf1);
    printf("%s\n","Ingresa tu segunda calificacion: ");
    scanf("%f",&calf2);
    printf("%s\n","Ingresa tu tercera calificacion: ");
    scanf("%f",&calf3);
    promedio=(calf1+calf2+calf3)/3;
    printf("%s%.2f\n","Su promedio es de: ",promedio);
    return 0;
}