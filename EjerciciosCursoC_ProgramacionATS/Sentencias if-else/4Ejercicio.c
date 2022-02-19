/* Ingresar por teclado el nombre y el signo de cualquier persona e imprima
el nombre solo si la persona es signo aries, casocontrario imprima no es
signo aries */

#include <stdio.h>

int main()
{
    //Defining variables
    char nombre[30], signo[20];

    //What's your name, and what's your sign
    printf("Digite su nombre: ");
    gets(nombre);
    printf("Digite su signo: ");
    gets(signo);

    //The process with if, and the outputs
    // Cuando decimos que es igual a 0, estamos evaluando si son iguales.
    if(strcmp(signo, "aries") == 0) 
    {
        printf("\nEs signo aries y su nombre es: %s", nombre);
    }
    else
    {
        printf("No es signo aries.");
    }

    return 0;
}