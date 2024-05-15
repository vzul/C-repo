/******************************************************************************

Escribir un programa en C que lea al menos dos valores enteros positivos por
teclado (0 para acabar), e imprima al final el menor y el mayor de los valores
leídos.

*******************************************************************************/
#include <stdio.h>

int main()
{
    unsigned int ref,ref1;
    printf("Insertar entero: ");
    scanf("%d", &ref);
    fflush(stdin);
    
    printf("Insertar entero: ");
    scanf("%d", &ref1);
    fflush(stdin);
    
     if (ref < ref1) {
         printf("%d es menor que %d", ref, ref1) ;
     } else if (ref1 < ref) {
         printf("%d es menor que %d", ref1, ref) ;
     } else printf("%d y %d son equivalentes", ref,ref1);
     
    
    return 0;
}
