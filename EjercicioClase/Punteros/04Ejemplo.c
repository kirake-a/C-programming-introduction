#include <stdio.h>

int main(){

    int *punt;
    int x=7, y;

    punt = &x; //Apuntamos a la direccion de la variable x
    *punt = 4; //Asignamos un 4 a la variable x, ya que el puntero estaba asignado a la direccion &x

    punt = &y; //Entonces se apunta ahora a la direccion de la variable y
    *punt = 8; //Y se le asigna un 8 a la variable y, por lo ya comentado

    punt = &x;
    x = 10;

    printf("x: %d \ny: %d", x, y);

    return 0;
}