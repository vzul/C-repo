/******************************************************************************

Escribe un programa en C que permita calcular el cambio de euros a dólares.

Cotización de cambio de euro a dólar (mayo 2024) : 1 EUR = 1.08 USD

*******************************************************************************/

#include <stdio.h>

int cambio (float eur){
    float usd;
    usd = 1.08*eur;
    printf("Equivale a %0.2f USD", usd);
}

int main()
{
    float eur;
    printf("Cantidad en euros: ");
    scanf("%f", &eur);
    
    cambio (eur);

    return 0;
}
