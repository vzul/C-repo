/******************************************************************************

Leer la nota de un examen y felicitar si es mayor que 5, en otro caso
recomendar más estudio

*******************************************************************************/
#include <stdio.h>

int main()
{
    float nota;
    printf("Insertar nota: ");
    scanf("%f", &nota);
    
    if (nota >= 5) {
        printf("Enhorabuena, has aprobado.");
    } else printf("¡Estudia más!");

    return 0;
}
