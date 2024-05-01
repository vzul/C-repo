/******************************************************************************

Escribir un programa que lea un carácter y escriba un 1 si el carácter es una letra m, n
(minúscula o mayúscula) y 0 (cero) en cualquier otro caso.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char flag;
    printf("Insertar caracter:");
    scanf("%c", &flag);
    if (flag == 'm') printf("1");
    else printf("0");
    
    return 0;
}
