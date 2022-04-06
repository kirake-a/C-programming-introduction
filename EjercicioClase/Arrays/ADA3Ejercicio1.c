#include <stdio.h>
#include <string.h>
#define tam 5

int main(){
    int cadena1[tam], cadena2[tam];
    int i, j;

    // Se piden valores al usuario para definir los arreglos 1 y 2... entrada de datos*
    for (i = 0; i < tam; i++)
    {
        printf("Inserte un valor para la cadena entera1[%d]: ", i);
        scanf("%d", &cadena1[i]);
    }

    printf("\n\n");

    for (j = 0; j < tam; j++)
    {
        printf("Inserte un valor para la cadena entera2[%d]: ", j);
        scanf("%d", &cadena2[j]);
    }

    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            
        }

        return 0;
    }