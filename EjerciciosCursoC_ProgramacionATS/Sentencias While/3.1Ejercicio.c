//Mostrar los 10 primeros numeros en pantalla en forma ascendente

#include <stdio.h>

int main(){
    int i;

    i = 0;

    while(i <= 10){
        printf("%i. \n", i);
        i += 1; // Esta linea tambien puede escribirse como i++;
    }

    return 0;
}