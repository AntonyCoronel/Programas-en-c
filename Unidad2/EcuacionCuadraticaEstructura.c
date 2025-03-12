#include<stdio.h>
#include<string.h>
#include<math.h>
struct EcCuadratica
{
    int a;
    int b;
    int c;
    int discriminante;
    float x1;
    float x2;
    char solucion[30];
};
int main(){
    struct EcCuadratica arreglo[2]={
        {2,3,-5,0,0.00,0.00},
        {3,7,-6,0,0.00,0.00}
    };

    for(int i=0;i<2;i++){
        int d=(arreglo[i].b*arreglo[i].b)-(4*arreglo[i].a*arreglo[i].c);
    if (d<0){
        strcpy (arreglo[i].solucion,"No  tiene  solucion");
    }else{
        int valorx1=((-1)*arreglo[i].b+sqrt(d))/2*arreglo[i].a;
        int valorx2=((-1)*arreglo[i].b-sqrt(d))/2*arreglo[i].a;
        strcpy(arreglo[i].solucion,"Tiene  solucion:");
        arreglo[i].x1=valorx1;
        arreglo[i].x2=valorx2;
       }
    }

    printf("%s|%s|%s|%s|%s|%s\n", "a", "b", "c", "x1", "x2", "Solucion");
    for (int i = 0; i < 2; i++)
    {
        printf("%d|%d|%d|%.2f|%.2f|%s\n", arreglo[i].a, arreglo[i].b, arreglo[i].c, arreglo[i].x1, arreglo[i].x2, arreglo[i].solucion);

    }
    
    return 0;
}