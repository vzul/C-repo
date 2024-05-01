/******************************************************************************

Escribir un programa que lea un carácter y escriba un 1 si el carácter es digito y 0 (cero) en
cualquier otro caso.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char flag;
    printf("Insertar carácter o dígito:");
    scanf("%c", &flag);
    if (flag >= '0' && flag <='9') printf("1");
    else printf("0");

    return 0;
}
