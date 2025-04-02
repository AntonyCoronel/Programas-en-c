#include <stdio.h>
int main(){
    int a,b,c,d,e,f,g=0;

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
    printf("Ingrese valor F\n");
    scanf("%d",&f);

    int *const AH=&a;
    int *const AL=&b;
    int *const BH=&c;
    int *const BL=&d;
    int *const CL=&e;
    int *const CH=&f;
    int *const DL=&g;


    printf("Valor ingresados; A=%p\n",&AH);
    printf("Valor ingresados; B=%p\n",&AL);
    printf("Valor ingresados; C=%p\n",&BH);
    printf("Valor ingresados; D=%p\n",&BL);
    printf("Valor ingresados; E=%p\n",&CL);

    printf("----------------------------\n");
printf("Operacion entre AH y AL\n");
    int suma=*AH+*AL;
    printf("Resultado de la suma: %d\n",suma);

    *DL=suma;
    printf("Direccion=%d\n",*DL);
    
    int resta=*AH-*AL;
    printf("Resultado de la suma: %d\n",resta);

    *DL=resta;
    printf("Direccion=%d\n",*DL);

    int multi=(*AH)*(*AL);
    printf("Resultado de la multiplicacion: %d\n",multi);

    *DL=multi;
    printf("Direccion=%d\n",*DL);

    float divi=(*AH)/(*AL);
    printf("Resultado de la divicion: %f\n",divi);

    *DL=divi;
    printf("Direccion=%d\n",*DL);

    printf("----------------------------\n");
    printf("Operacion entre BH y BL\n");
    int suma2=*BH+*BL;
    printf("Resultado de la suma: %d\n",suma2);

    *DL=suma2;
    printf("Direccion=%d\n",*DL);
    
    int resta2=*BH-*BL;
    printf("Resultado de la suma: %d\n",resta2);

    *DL=resta2;
    printf("Direccion=%d\n",*DL);

    int multi2=(*BH)*(*BL);
    printf("Resultado de la multiplicacion: %d\n",multi2);

    *DL=multi2;
    printf("Direccion=%d\n",*DL);

    float divi2=(*BH)/(*BL);
    printf("Resultado de la divicion: %f\n",divi2);

    *DL=divi2;
    printf("Direccion=%d\n",*DL);

    printf("----------------------------\n");
    printf("Operacion entre CH y CL\n");
    int suma3=*CH+*CL;
    printf("Resultado de la suma: %d\n",suma3);

    *DL=suma3;
    printf("Direccion=%d\n",*DL);
    
    int resta3=*CH-*CL;
    printf("Resultado de la suma: %d\n",resta3);

    *DL=resta3;
    printf("Direccion=%d\n",*DL);

    int multi3=(*CH)*(*CL);
    printf("Resultado de la multiplicacion: %d\n",multi3);

    *DL=multi3;
    printf("Direccion=%d\n",*DL);

    float divi3=(*CH)/(*CL);
    printf("Resultado de la divicion: %f\n",divi3);

    *DL=divi;
    printf("Direccion=%d\n",*DL);
    

    return 0;
}