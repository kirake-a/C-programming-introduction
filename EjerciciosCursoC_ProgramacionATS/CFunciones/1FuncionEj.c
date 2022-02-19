// Primer ejemplo del uso de funciones en el lenguaje C
#include <stdio.h>

void HolaMundo(); //Prototipado de la funcion Hola mundo
void sumarDosNumeros();

//Esta es la funcion main a la que van a retornar todas las funciones prototipadas
int main(){

    HolaMundo();
    sumarDosNumeros();

    return 0;
}

//Aqui ya tenemos en forma a la funcion que se enlaza con la funcion main()
void HolaMundo(){

    printf("Hola mundo, con funciones.");
    printf("\nDe nuevo se verifica la veracidad de toda la funcion, haciendo su trabajo de manera correcta.");
}

void sumarDosNumeros(){
    int num1, num2, add;

    add = 0;

    printf("\nRealizar la suma de algunos numeros enteros.");

    printf("\nIngrese el valor 1: ");
    scanf("%d", &num1);
    printf("\nIngrese el valor 2: ");
    scanf("%d", &num2);

    add = num1 + num2;

    printf("el resultado de la suma de dos numeros enteros es: %d", add);
}