/* Hacer un programa que pida dos numeros e indique si uno es divisor del otro */

#include <stdio.h>

int scanValues();
int divFunction(int val1, int val2);
void comparison(int result, int val1, int val2);

int main(){

    int num1, num2, result;

    num1 = scanValues();
    num2 = scanValues();
    result = divFunction(num1, num2);

    comparison(result, num1, num2);

    return 0;
}

int scanValues(){

    int num;

    printf("Inserte un valor: ");
    scanf(" %d", &num);

    return num;
}

int divFunction(int val1, int val2){

    int result;

    result = val1 % val2;

    return result;
}

void comparison(int result, int val1, int val2){
    if(result == 0){
        printf("\nEl valor %d tiene un divisor entero con %d.\n", val1, val2);
    }
    else{
        printf("\nEl numero %d, no es un divisor entero del numero %d.\n", val2, val1);
    }

}