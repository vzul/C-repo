/******************************************************************************

Escribe un programa en C que determine si un número entero es divisor de otro número entero

a | b si ∃k ∈ ℤ tal que b = ka

*******************************************************************************/
#include <stdio.h>

void es_divisor(int a, int b){
    int resto = b % a;
    if (resto == 0) {
        printf("%d es divisor de %d.", a, b);
    } else printf("%d no es divisor de %d.", a, b); 
}

int main()
{
    int a, b;
    printf("Entero 1: ");
    scanf("%d", &a);
    printf("Entero 2: ");
    scanf("%d", &b);

    es_divisor(a,b);
   
    return 0;
}
