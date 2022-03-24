#include <stdio.h>
#include <string.h>

/* Una secuencia de caracteres o simbolos entre comillas dobles hace alucion a una cadena, para una cadena usamos el
%s */

/*Se recomienda el uso de la libreria ctype.h para el manejo de cadenas. */

int main(){

    char nombre[20];

    // Utilizando la funcion gets para insertar datos en string por el usuario
    printf("Escriba su nombre: ");
    gets(nombre);

    printf(nombre);

    return 0;
}