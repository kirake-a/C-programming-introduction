/* Escribe un programa que tenga una funcion que reciba un numero entero (de maximo 3 digitos) y como
resultado de la ejecucion imprima la cantidad de centenas, decenas y unidades */

#include <stdio.h>

//Prototiping all the functions
    //This is for the output
void numeroAPAlabras(int centenas, int decenas, int unidades);

    //This is to calculate the values for numbers with 3 digits...
int valor3Digitos_centenas(int value);
int valor3Digitos_decenas(int value);
int valor3Digitos_unidades(int value);

    //This is to calculate the values for numbers with 2 digits...
int valor2Digitos_decenas(int value);
int valor2Digitos_unidades(int value);

int main(){

    int num, centenas, decenas, unidades;

    printf("Inserte un valor de maximo 3 digitos: ");
    scanf("%i", &num);

    if(num >= 100 && num < 1000){
        centenas = valor3Digitos_centenas(num);
        decenas = valor3Digitos_decenas(num);
        unidades = valor3Digitos_unidades(decenas);
        void numeroAPalabras(centenas, decenas, unidades);
    }
    else if(num >= 10 && num < 100){
        centenas = 0;
        decenas =  valor2Digitos(num);
        unidades = valor2Digitos_unidades(num);
        void numeroAPalabras(centenas, decenas, unidades);
    }
    else if(num >= 0 && num < 10){
        centenas = 0;
        decenas = 0;
        unidades = num;
        void numeroAPalabras(centenas, decenas, unidades);
    }

    return 0;
}

//With this part of the code, we're going to calculate the values for number with 3 digits...
int valor3Digitos_centenas(int value){
    int centenas;

    centenas = value / 100;

    return centenas;
}

int valor3Digitos_decenas(int value){
    int moddecenas, decenas;

    moddecenas = value % 100;
    decenas = moddecenas / 10;

    return decenas;
}

int valor3Digitos_unidades(int value){
    int unidades;

    unidades = value % 10;
}

//This other block of the code is for numbers with 2 digits...
int valor2Digitos_decenas(int value){
    int decenas;

    decenas = value / 10;

    return decenas;
}

int valor2Digitos_unidades(int value){
    int unidades;

    unidades = value % 10;

    return unidades;
}

void numeroAPalabras(){


}