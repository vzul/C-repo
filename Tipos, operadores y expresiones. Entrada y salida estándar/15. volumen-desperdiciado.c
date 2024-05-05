/******************************************************************************

Hacer un programa que calcule el volumen desperdiciado en un cubo cuyo interior se ha
rellenado con esferas de radio r.
A partir del ejercicio anterior (14.), podemos determinar cuántas esferas caben, con este dato
calcularíamos el volumen ocupado por TODAS las esferas (Ve = 4/3 π r3) y si al volumen del
cubo (Vc = lado3) le restamos el volumen de las esferas el problema está resuelto.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int cantidad(float lado, float radio){
    int cantidad_lado = lado/(2*radio);
   return pow (cantidad_lado, 3);
}

float vol_esferas(int cantidad, float radio){
    float vol_esfera = (4.0/3.0)*PI*pow(radio,3);
    return cantidad*vol_esfera;
} 

float vol_cubo(float lado){
    return pow(lado,3);
}


int volumen_desperdiciado(int v1, int v2){
    return v2-v1;
}

int main()
{
    float lado, radio;
    printf("Insertar lado del cubo: ");
    scanf("%f", &lado);    
    printf("Insertar radio de la esfera: ");
    scanf("%f", &radio);
    
    int cantidad_esferas = cantidad(lado, radio);
    float v1 = vol_esferas(cantidad_esferas, radio);
    float v2 = vol_cubo(lado);
    float v3 = volumen_desperdiciado(v1,v2);

    printf("\nCantidad de esferas: %d", cantidad_esferas);
    printf("\nVolumen total de esferas: %0.2f", v1);
    printf("\nVolumen de cubo que contiene a las esferas: %0.2f", v2);
    printf("\nVolumen desperdiciado: %0.2f", v3);
    return 0;
}


