/******************************************************************************

Hacer un programa que escriba el área de un triángulo (a partir de su base y altura) y de un
circulo (a partir del radio), para ello pedirá que se introduzcan por teclado los valores de
correspondientes a cada figura.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float base, altura, radio, resultado1, resultado2;
    char respuesta;
    
    printf("¿Calcular área de triángulo o círculo? (responder con t o c): ");
    scanf("%c", &respuesta);
    
        if (respuesta == 't') {
       
            printf("Insertar base: ");
            scanf("%f", &base);
            fflush(stdin);
            printf("Insertar altura: ");
            scanf("%f", &altura);
            
            resultado1 = base*altura/2;
            printf("Área: %0.4f", resultado1);
       
        } else if (respuesta == 'c') {
             printf("Insertar radio: ");
             scanf("%f", &radio);
             
            resultado2 = 3.14159265358979323846*(radio)*(radio);
            printf("Área: %0.4f", resultado2);
       
       
   } else return -1;
     
}
