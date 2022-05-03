#include <stdio.h>

int main(){

    int var1 = 10; // Variable entera comun, que sera apuntada posteriormente por un apuntador definido.
    int *apuntador_entero; // esta variable apuntador servira para apuntar a la varaible var1.

    apuntador_entero = &var1; 
    /* Ahora el apuntador contiene la direccion de memoria de la variable var1, 
    ya apunta hacia la variable declarada. */
    /* apuntador_entero = *var1; tambien puede haberse escrito de esa forma */

    printf("\nValor de var1: %d", var1);

    *apuntador_entero = 30;

    printf("\nValor de var1, ya con uso de apuntador: %d", var1);
    printf("\n\n");

    return 0;
}