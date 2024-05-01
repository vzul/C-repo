/******************************************************************************

Con única instrucción printf() imprimir para cada uno de los casos los valores que se piden:
Suponemos realizada la declaración: int n1, n2; float x1, x2;

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n1 = 9;
    int n2 = 18; 
    float x1 = 4785.9558;
    float x2 = 12.334;
    
// el valor de las variables n1 y n2 justificadas a la derecha en un campo de 10 dígitos y cada una en una línea.
    printf("0123456789\n");
    printf("%10d\n%10d\n", n1, n2); // tabulaciones son 8 bits por defecto.
    
// en una única línea y separados por una coma el valor de las variables n1 y n2 justificadas la izquierda en un campo de 10 dígitos.
    printf("%10d,%10d\n", n1, n2);

// en líneas distintas, el valor de la variables x1 y x2 en notación exponencial y con dos dígitos de precisión. Entre una línea y otro debe quedar una línea en blanco.
    printf("%0.2e\n\n%0.2e\n", x1, x2);
    
// el valor de la variable x2 en notación decimal en un campo de longitud 15 y con tres dígitos decimales.
    printf("%15.3f", x2);
    

    return 0;
}
