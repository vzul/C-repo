/******************************************************************************

Hacer un programa que lea por teclado un número de 3 cifras y escriba el número inverso (el
que resulta de colocar las cifras en orden contrario). Si se lee el 456 se escribirá el 654.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, resto, inverso = 0;
    printf("Insertar número: ");
    scanf("%d", &n);

    do {
        resto = n % 10; 
        inverso = inverso * 10 + resto;
        n /= 10;
    } while (n != 0);
    
    printf("Número en orden inverso: %d", inverso);
    
    return 0;
}
