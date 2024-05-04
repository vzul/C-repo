/******************************************************************************

Hacer un programa que calcule cuántas esferas caben dentro de un cubo. Tienes que conocer
las dimensiones del cubo (lado, l) y de la esfera (radio, r). Lo que hay que hacer es dividir el
largo del lado del cubo entre "2r", donde "r" es el radio de cada esfera.
Ese será el número de esferas que caben en línea en ese lado, por lo tanto si se trata de un
cubo, el número de esferas total será (l/2r)3

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int cantidad(float lado, float radio){
    int cantidad, cantidad_lado;
    cantidad_lado = lado/(2*radio);
    cantidad = pow (cantidad_lado, 3);
    printf("\nCantidad: %d", cantidad);
}


int main()
{
    float lado, radio;
    printf("Insertar lado del cubo: ");
    scanf("%f", &lado);
    printf("Insertar radio de la esfera: ");
    scanf("%f", &radio);
    
    cantidad(lado, radio);
    
    return 0;
}

