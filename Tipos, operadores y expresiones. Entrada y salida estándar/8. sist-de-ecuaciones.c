/******************************************************************************

Dado el sistema de ecuaciones:
Ax + By = C
Dx + Ey = F
Hacer un programa que lea por teclado los valores de A, B, C, D, E, F y lo resuelva el sistema.
Para ello tener en cuenta que:

x = (CE-BF)/(AE-BD)
y = (AF-CD)/(AE-BD)

*******************************************************************************/
#include <stdio.h>

int calc_x(int a, int b, int c, int d, int e, int f){
    int x;
    x = (c*e-b*f)/(a*e-b*d);
    printf("x = %d", x);
}

int calc_y(int a, int b, int c, int d, int e, int f){
    int y;
    y = (a*f-c*d)/(a*e-b*d);
    printf("\ny = %d", y);
    
}

int main()
{
    int a,b,c,d,e,f;
    printf("Valor A: ");
    scanf("%d",&a);
    printf("Valor B: ");
    scanf("%d",&b);
    printf("Valor C: ");
    scanf("%d",&c);
    printf("Valor D: ");
    scanf("%d",&d);
    printf("Valor E: ");
    scanf("%d",&e);
    printf("Valor F: ");
    scanf("%d",&f);
    
    calc_x(a,b,c,d,e,f);
    calc_y(a,b,c,d,e,f);
    
    return 0;
}
