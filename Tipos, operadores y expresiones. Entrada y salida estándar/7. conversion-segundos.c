/******************************************************************************

Escribir un programa que pida al usuario una cantidad de segundos, y muestre a cuántas
horas, minutos y segundos equivale

*******************************************************************************/
#include <stdio.h>

int conv(float segundos){
    float horas, minutos;
    minutos = segundos/60; 
    horas = minutos/60;
    printf("Horas: %0.2f", horas);
    printf("\nMinutos: %0.2f", minutos);
    printf("\nSegundos: %0.2f", segundos);
}

int main()
{
    float seg;
    printf("Insertar segundos: ");
    scanf("%f", &seg);
    
    conv(seg);
    return 0;
}
