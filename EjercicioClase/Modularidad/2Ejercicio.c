#include <stdio.h>

//Prototype of the functions
int theFactorial();

//The main function
int main(){

    int num1, num2, factorialR_num1, factorialR_num2;

    printf("Digite el primer valor: ");
    scanf("%d", &num1);
    printf("Digite al segundo valor: ");
    scanf("%d", &num2);

    factorialR_num1 = theFactorial(num1);
    printf("\nEl resultado del factorial del primer valor fue de: %d", factorialR_num1);
    factorialR_num2 = theFactorial(num2);
    printf("\nEl resultado del factorial del segunda valor es: %d", factorialR_num2);

    return 0;
}

//The factorial of a number
int theFactorial(int newValue){

    int i, fact = 1;

    for (i = 1; i <= newValue; i++){
        fact = fact * i;
    }

    return fact;
}