/******************************************************************************

Hacer un programa que lea tres enteros y si el primero es negativo escriba la
multiplicación de los tres números leídos, en otro caso escribirá la suma de los tres.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int ref, ref2, ref3;
    int mult, suma;
  
    printf("Insertar entero: ");
    scanf("%d", &ref);
    fflush(stdin);
    
    printf("Insertar entero: ");
    scanf("%d", &ref2);
    fflush(stdin);

    printf("Insertar entero: ");
    scanf("%d", &ref3);
    fflush(stdin);
    
    if (ref < 0) {
        mult = ref * ref2 * ref3;
        printf("La multiplicación de los tres números es: %d", mult);
    } else {
        suma = ref + ref2 + ref3;
        printf("La suma de los tres números e: %d", suma);
    }
    
    return 0;
}
