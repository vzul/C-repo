/******************************************************************************

Leer un número entero y escribir su valor absoluto 

*******************************************************************************/
#include <stdio.h>

int conv_numero(int entero1){
  int n;
  if (entero1 < '0') {
    n = (-1) * entero1;
      printf("%d es el valor absoluto de %d", n, entero1);
  } else { 
      printf("%d es el valor absoluto de %d", entero1, entero1);}
        }

int main(){

  int entero1;
  printf("Insertar un numero:" );
  scanf("%d", &entero1);

  conv_numero(entero1);
    
  return 0;
}
