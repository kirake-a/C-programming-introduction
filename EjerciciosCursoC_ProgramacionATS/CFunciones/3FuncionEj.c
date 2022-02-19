// Print all the prime number between 0-100

#include <stdio.h>

//Prototyped of the functions linked to main()
int losPrimos();

//The main() function
int main(){
    int primos;

    primos = losPrimos(primos);

    return 0;
}

//The function losPrimos() is linked to main, finding all the prime number between 0-100
int losPrimos(int num){

    int x, contador;

    for (num = 1; num <= 100; num++)
    {
        x = 1;
        contador = 0;
        while (x <= num)
        {
            if (num % x == 0)
            {
                contador += 1;
            }
            x += 1;
        }

        if (contador == 2)
        {
            printf("\nEl numero %d, es primo.", num);
        }
    }

    return num;
}
