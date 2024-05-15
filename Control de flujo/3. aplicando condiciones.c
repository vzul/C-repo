/******************************************************************************

Leer valor entero y si es 1, escribir UNO, si es 2, escribir 2, si es 3, escribir TRES,
en otro caso escribir NI UNO, NI DOS, NI TRES 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int entero;
    printf("Insertar entero: ");
    scanf("%d", &entero);
    
    if (entero == 1){          // single quotes are for chars!!
        printf("UNO");
    } else if (entero == 2) {
        printf("DOS");
    } else if (entero == 3) {
        printf("TRES");
    } else {
        printf("NI UNO, NI DOS, NI TRES.");
    }
    
    return 0;
}

