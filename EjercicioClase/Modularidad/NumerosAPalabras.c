/* Escribe un programa que tenga una funcion que reciba un numero entero (de maximo 3 digitos) y como
resultado de la ejecucion imprima la cantidad de centenas, decenas y unidades */

#include <stdio.h>
#include <string.h>

//Prototiping all the functions
//This is for the output
void numberToWords(int hundreds, int tens, int units);

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
        unidades = valor3Digitos_unidades(num);

        numberToWords(centenas, decenas, unidades);
    }
    else if(num >= 10 && num < 100){
        centenas = 0;
        decenas =  valor2Digitos_decenas(num);
        unidades = valor2Digitos_unidades(num);

        numberToWords(centenas, decenas, unidades);
    }
    else if(num >= 0 && num < 10){
        centenas = 0;
        decenas = 0;
        unidades = num;

        numberToWords(centenas, decenas, unidades);
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
    int moddecenas, unidades;

    moddecenas = value % 100;
    unidades = moddecenas % 10;
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

void numberToWords(int hundreds, int tens, int units){
    char hundredsW[10], tensW[10], unitsW[10];

    switch(hundreds){
        case 0:
            hundredsW == "cero";
            break;
        case 1:
            hundredsW == "una";
            break;
        case 2:
            hundredsW == "dos";
            break;
        case 3:
            hundredsW == "tres";
            break;
        case 4:
            hundredsW == "cuatro";
            break;
        case 5:
            hundredsW == "cinco";
            break;
        case 6:
            hundredsW == "seis";
            break;
        case 7:
            hundredsW == "siete";
            break;
        case 8:
            hundredsW == "ocho";
            break;
        case 9:
            hundredsW == "nueve";
            break;
        default:
            printf("*Error*");
    }

    switch (tens){
        case 0:
            tensW == "cero";
            break;
        case 1:
            tensW == "una";
            break;
        case 2:
            tensW == "dos";
            break;
        case 3:
            tensW == "tres";
            break;
        case 4:
            tensW == "cuatro";
            break;
        case 5:
            tensW == "cinco";
            break;
        case 6:
            tensW == "seis";
            break;
        case 7:
            tensW == "siete";
            break;
        case 8:
            tensW == "ocho";
            break;
        case 9:
            tensW == "nueve";
            break;
        default:
            printf("*Error*");
    }

    switch (units){
        case 0:
            unitsW == "cero";
            break;
        case 1:
            unitsW == "una";
            break;
        case 2:
            unitsW == "dos";
            break;
        case 3:
            unitsW == "tres";
            break;
        case 4:
            unitsW == "cuatro";
            break;
        case 5:
            unitsW == "cinco";
            break;
        case 6:
            unitsW == "seis";
            break;
        case 7:
            unitsW == "siete";
            break;
        case 8:
            unitsW == "ocho";
            break;
        case 9:
            unitsW == "nueve";
            break;
        default:
            printf("*Error*");
    }

    printf("\nEl numero digitado es de %c centenas, %c decenas y %c unidades", hundredsW, tensW, unitsW);
}