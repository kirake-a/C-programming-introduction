#include <stdio.h>

int input_values();
int the_factorial(int value);

int main(){
    int n, m, rest, result;
    int n_factorial, m_factorial, rest_factorial;

    printf("Inserte un valor para n y otro para m, en ese orden.");

    n = input_values();
    m = input_values();

    n_factorial = the_factorial(n);
    m_factorial = the_factorial(m);

    rest = (m - n);
    rest_factorial = the_factorial(rest);

    result = (m_factorial) / (n_factorial * (rest_factorial));

    printf("\nEl resultado de la operacion con los valores %d y %d es: %d", n, m, result);

    return 0;
}

int input_values(){
    int input_value;

    printf("\nInserte el valor: ");
    scanf("%d", &input_value);

    return input_value;
}

int the_factorial(int value){
    
    int vFactorial = 1, i;

    for (i = 1; i <= value; i++){
        vFactorial = vFactorial * i;
    }
    
    return vFactorial;
}

