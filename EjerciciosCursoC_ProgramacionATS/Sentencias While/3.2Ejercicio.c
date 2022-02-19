// Mostrar los 10 primeros numeros en pantalla de forma descendente
#include <stdio.h>

int main(){
    int i;

    i = 10;

    while(i >= 0){
        printf("%i. \n", i);
        i -= 1;             // Esta linea puede tambien ser escrita como i--;, con lo que decrementamos 1 a i
        /* podemos utilizar puts(""), para agregar unicamente el retorno de texto en los condicionales,
        en estos casos no es necesario hacer uso de printf("") */
    }

    return 0;
}