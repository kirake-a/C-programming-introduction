/* Programa que contiene una funcion que tiene la suma de dos enteros */

#include <stdio.h>

//Protoryping all the functions
int sumaDosValores();
void leervalores();

//The main function in the program sum
int main(){

    int n1, n2, resultadoSuma;

    //Caling functions to main()
    leerValores(n1);
    leerValores(n2);
    resultadoSuma = sumaDosValores(n1, n2);
    printf("\nEl resultado de la suma es: %d", resultadoSuma);

    return 0;
}

void leerValores(int valor){

    printf("Digite un valor: ");
    scanf("%d", &valor);
}

//Doing the sum
int sumaDosValores(int num1, int num2){
    //Defining local variables for the sum
    int sum;

    sum = num1 + num2;

    return sum;
}