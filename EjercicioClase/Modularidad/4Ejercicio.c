/*Escribir una funcion logica Vocal que determine si un caracter es una vocal */

#include <stdio.h>

char vocal(char letra);

int main(){

    char letra, valor, evaluacion;

    printf("Digite una letra para determinar si es una vocal: ");
    scanf("%c", &letra);

    evaluacion = vocal(letra);

    if(evaluacion == 'V'){
        printf("\nLa letra digitada es una VOCAL.");
    }
    else if(evaluacion == 'F'){
        printf("\nLa letra digitada NO es una vocal.");
    }

    return 0;
}

char vocal(char letra){
    char comparador, veracidad;

    switch(letra){

        case 'a':
            comparador = 'z';
            break;
        case 'e':
            comparador = 'z';
            break;
        case 'i':
            comparador = 'z';
            break;
        case 'o':
            comparador = 'z';
            break;
        case 'u':
            comparador = 'z';
            break;
        default:
            comparador = 'x';
    }

    if(comparador == 'z'){
        veracidad = 'V';
    }
    else if(comparador == 'x'){
        veracidad = 'F';
    }

    return veracidad;
}