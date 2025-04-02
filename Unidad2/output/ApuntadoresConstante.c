#include <stdio.h>
int main(){
    int a,b,c,d,e;

    printf("Ingrese valor A\n");
    scanf("%d",&a);
    printf("Ingrese valor B\n");
    scanf("%d",&b);
    printf("Ingrese valor C\n");
    scanf("%d",&c);
    printf("Ingrese valor D\n");
    scanf("%d",&d);
    printf("Ingrese valor E\n");
    scanf("%d",&e);

    int *const pa=&a;
    int *const pb=&b;
    int *const pc=&c;
    int *const pd=&d;
    int *const pe=&e;

    printf("Valor ingresados; A=%p\n",&pa);
    printf("Valor ingresados; B=%p\n",&pd);
    printf("Valor ingresados; C=%p\n",&pc);
    printf("Valor ingresados; D=%p\n",&pd);
    printf("Valor ingresados; E=%p\n",&pe);

    int suma=*pa+*pa;
    printf("Resultado de la suma: %d\n",suma);

    *pa=suma;
    printf("Valor nuevo A=%d\n",*pa);

    int resta=*pb-*pb;
    printf("Resultado de la resta: %d\n",resta);

    *pb=resta;
    printf("Valor nuevo B=%d\n",*pb);

    int multi=(*pc)*(*pc);
    printf("Resultado de la multiplicacion: %d\n",multi);

    *pc=multi;
    printf("Valor nuevo C=%d\n",*pc);

    float divi=(*pd)/(*pd);
    printf("Resultado de la division: %f\n",divi);

    *pd=divi;
    printf("Valor nuevo D=%d\n",*pd);

    return 0;
}