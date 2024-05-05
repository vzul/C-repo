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
    int cantidad, cantidad_lado;
    cantidad_lado = lado/(2*radio);
    cantidad = pow (cantidad_lado, 3);
    printf("\nCantidad: %d", cantidad);
    return cantidad;
}

float vol_esferas(int cantidad, float radio){
    float vol_esfera, vol_total_esferas;
    vol_esfera = (4.0/3.0)*PI*pow(radio,3);
    vol_total_esferas = cantidad*vol_esfera;
    printf("\n Volumen total esferas: %0.2f", vol_total_esferas);
    return vol_total_esferas;
} 

float vol_cubo(float lado){
    float vol_cubo; 
    vol_cubo = pow(lado,3);
    printf("\n Volumen cubo: %0.2f", vol_cubo);
    return vol_cubo;
}


int volumen_desperdiciado(int v1, int v2){
    int vol_final;
    vol_final = v2-v1;
    printf("\n Volumen desperdiciado: %d", vol_final);
    return vol_final;
}

int main()
{
    float lado, radio;
    printf("Insertar lado del cubo: ");
    scanf("%f", &lado);    
    printf("Insertar radio de la esfera: ");
    scanf("%f", &radio);
    
    int cantidad_esferas = cantidad(lado, radio);
    
    int v1, v2, v3;
    v1 = vol_esferas(cantidad_esferas, radio);
    v2 = vol_cubo(lado);
    v3 = volumen_desperdiciado(v1,v2);
    
    
    return 0;
}


