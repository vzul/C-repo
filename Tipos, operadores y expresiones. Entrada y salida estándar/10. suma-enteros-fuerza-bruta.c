/******************************************************************************

Hacer un programa que lea tres valores enteros y determine si alguno de ellos es igual a la
suma de los otros dos.

*******************************************************************************/
#include <stdio.h>

int lectura(int numeros[3]){
    
    // subconjuntos: 1+2, 1+3, 2+3
   if (numeros[2] == numeros[0] + numeros[1]) {
       printf("\n%d es combinación de %d y %d ", numeros[2], numeros[0], numeros[1]);
   } else if (numeros[1] == numeros[0] + numeros[2]) {
       printf("\n%d es combinación de %d y %d ", numeros[1], numeros[0], numeros[2]);
   } else if (numeros[0] == numeros[1] + numeros[2]) {
       printf("\n%d es combinación de %d y %d ", numeros[0], numeros[1], numeros[2]);
   } else printf("\nNo hay ninguna combinación.");
   
    
}

int main()
{
    int numeros[3], resultado;
    
    for (int i=0; i< 3; i++) {
        printf("Insertar número %d:", i+1);
        scanf("%d", &numeros[i]);
    }
    
    for (int i=0; i< 3; i++) {
        printf("%d ", numeros[i]);
    }
    
    resultado = lectura(numeros);

    return 0;
}
