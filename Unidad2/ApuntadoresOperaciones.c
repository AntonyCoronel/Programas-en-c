#include <stdio.h>

int main() {
    int fno, sno, *ptr, *qtr;
    int sum, res, mul;
    float div;

    printf("\n\n Pointer: Operaciones con dos números:\n");
    printf("----------------------------------------\n");

    printf("Input the first number: ");
    scanf("%d", &fno);

    printf("Input the second number: ");
    scanf("%d", &sno);

    ptr = &fno;
    qtr = &sno;

    printf("\nDirección de memoria de fno (ptr): %p", ptr);
    printf("\nDirección de memoria de sno (qtr): %p", qtr);

   
    sum = *ptr + *qtr;
    printf("\n\nSuma: %d + %d = %d", *ptr, *qtr, sum);
    printf("\nDirección de memoria de suma: %p", &sum);

 
    res = *ptr - *qtr;
    printf("\n\nResta: %d - %d = %d", *ptr, *qtr, res);
    printf("\nDirección de memoria de resta: %p", &res);

 
    mul = (*ptr) * (*qtr);
    printf("\n\nMultiplicación: %d * %d = %d", *ptr, *qtr, mul);
    printf("\nDirección de memoria de multiplicación: %p",&mul);

   
    div = (*ptr) / (*qtr);
        printf("\n\nDivisión: %d / %d = %.2f", *ptr, *qtr, div);
        printf("\nDirección de memoria de división: %p\n\n",&div);
    return 0;
}
