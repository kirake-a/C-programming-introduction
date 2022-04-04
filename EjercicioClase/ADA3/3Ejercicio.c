#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    // el tamaño es de 83 pues es la cantidad de letras que caben en una linea de word
    char cadena[83];
    int i, tam_cadena;

    printf("Inserte una cadena\n\n");
    printf("Cadena: ");
    scanf("%s", &cadena);

    tam_cadena = strlen(cadena);

    for (i = 0; i < tam_cadena; i++){
        cadena[i] = toupper(cadena[i]);
    }

    printf("[");
    printf("\t\t---__%s__----\t\t", cadena);
    printf("]");

    return 0;
}