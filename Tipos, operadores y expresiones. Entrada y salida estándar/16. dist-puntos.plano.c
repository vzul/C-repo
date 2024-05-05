
/******************************************************************************

Escribe un programa en C que calcule la distancia entre dos puntos del plano real.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

float distancia (float x1, float y1, float x2, float y2){
    return sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    
}

int main()
{
    float x1,y1,x2,y2;
    printf("Coordenada x punto 1: ");
    scanf("%f", &x1);
    printf("Coordenada y punto 1: ");
    scanf("%f", &y1);
    printf("Coordenada x punto 2: ");
    scanf("%f", &x2);
    printf("Coordenada y punto 2: ");
    scanf("%f", &y2);
    
    float dist = distancia(x1,y1,x2,y2);
    printf("Distancia entre puntos: %0.2f", dist);
    
    return 0;
}
