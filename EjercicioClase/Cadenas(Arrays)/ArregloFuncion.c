// Programa que recibe dos cadenas y que las une mediante una funcion
#include <stdio.h>

void concatenar(char cadena1[20], char cadena2[20]);

int main(){

    char nombre[20];
    char apellido[20];

    printf("Inserte su nombre: ");
    scanf("%s", nombre);

    printf("Inserte su apellido: ");
    scanf("%s", apellido);

    concatenar(nombre, apellido);

    return 0;
}

void concatenar(char cadena1[20], char cadena2[20]){
    char concat_cadena[40];
    char concat_cadena1[40];
    int k=0;

    for (int i = 0; i < 20; i++){
        concat_cadena[k] = cadena1[i];
        k++;
    }

    printf(" %s", concat_cadena);

    for (int i = 0; i < 20; i++){
        concat_cadena1[k] = cadena2[i];
        k++;
    }

    printf(" %s", concat_cadena1);
}