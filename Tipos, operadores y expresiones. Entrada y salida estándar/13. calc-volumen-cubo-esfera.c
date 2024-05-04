/******************************************************************************

Hacer un programa que leyendo el valor de la arista de un cubo (l), calcule el volumen del cubo
y el volumen de la mayor esfera contenida en él.

Volumen esfera: 4/3 · π · radio^3
Volumen cubo: lado^3

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

void calc_volumen(float arista){
    // arista = diámetro = 2 · radio
    float vol_cubo, vol_esfera;
    vol_cubo = pow(arista,3);
    vol_esfera = (4.0/3.0)*PI*pow(arista/2,3); // *asegurar poner división en formato correcto (punto flotante) -> posibilidad de truncame¡iento
    
    printf("Volumen cubo: %02.f m^3", vol_cubo);
    printf("\nVolumen de mayor esfera: %0.2f m^3", vol_esfera);
}

int main()
{
    float arista;
    printf("Insertar arista cubo en metros: ");
    scanf("%f", &arista);
    
    calc_volumen(arista);

    return 0;
}


